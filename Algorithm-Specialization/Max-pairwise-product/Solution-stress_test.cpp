#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

// Function Prototypes
void take_input(int &num);
long long products_of_max(const vector<int> &values);

int main()
{
    int arr_size{};

    cout << "Enter the number of elements you want to add " << endl;
    take_input(arr_size);

    vector<int> numbers(arr_size);
    for (auto &num : numbers)
        cin >> num;

    long long product{};
    product = products_of_max(numbers);
    cout << " And, The maxpair product value is :" << product << endl;

    return 0;
}

void take_input(int &num)
{
    do
        cin >> num;
    while (num < 2);
}

long long products_of_max(const vector<int> &values)
{
    int max_index1{-1};
    for (size_t i{}; i < values.size(); ++i)
        if (max_index1 == -1 || values.at(i) > values.at(max_index1))
            max_index1 = i;

    int max_index2{-1};
    for (size_t j{}; j < values.size(); ++j)
        if (j != max_index1 && (max_index2 == -1 || values.at(j) > values.at(max_index2)))
            max_index2 = j;

    cout << " The Max 2 Values are " << values.at(max_index2) << " and " << values.at(max_index1) << endl;

    return (static_cast<long long>(values.at(max_index1)) * values.at(max_index2));
}