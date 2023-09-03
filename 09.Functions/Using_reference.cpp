#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void scale_numer(int &num);
void print(vector<int> &arr);
void print_const(const vector<int> &arr);

void scale_numer(int &num)
{
    if (num > 500)
        num = 500;
}

void print(vector<int> &arr)
{
    arr.at(2) = 77;
    for (auto value : arr)
        cout << value << " | ";
    cout << endl;
}

void print_const(const vector<int> &arr)
{
    // Not gonna work, Because of const keyword we can't change the value in this scope.
    // arr.at(2) = 700;

    for (auto value : arr)
        cout << value << " | ";
    cout << endl;
}

int main()
{
    int number{2000};
    scale_numer(number);

    cout << number << endl;

    vector<int> arr_number{77, 52, 65, 23, 220};

    print_const(arr_number);
    print(arr_number);

    return 0;
}