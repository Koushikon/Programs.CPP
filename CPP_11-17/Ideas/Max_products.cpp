#include <iostream>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

// Function Prototypes
void take_input(double &num, int min);
double products_of_max(vector<double> &values);

int main()
{
    int min_limit{2};
    double number{};

    cout << "Enter the number of elements you want to add " << endl;
    take_input(number, min_limit);

    min_limit = 0;
    number = floor(number);

    vector<double> numbers(number);
    for (size_t i{}; i < numbers.size(); ++i)
    {
        cout << "\t" << i + 1 << " ";
        take_input(numbers.at(i), min_limit);
    }

    double product{};
    product = products_of_max(numbers);
    cout << "\t\tAnd, The maxpair product value is :" << product << endl;
    return 0;
}

void take_input(double &num, int min)
{
    do
    {
        cout << "Enter the value: ";
        cin >> num;
    } while (num < min);
}

double products_of_max(vector<double> &values)
{
    int max_index1{-1};
    for (size_t i{}; i < values.size(); ++i)
    {
        if (max_index1 == -1 || values.at(i) > values.at(max_index1))
            max_index1 = i;
    }

    int max_index2{-1};
    for (size_t j{}; j < values.size(); ++j)
    {
        if (j != max_index1 && (max_index2 == -1 || values.at(j) > values.at(max_index2)))
        {
            max_index2 = j;
        }
    }

    cout << "\tThe Max 2 Values are " << values.at(max_index2) << " and " << values.at(max_index1) << endl;

    return (values.at(max_index1) * values.at(max_index2));
}