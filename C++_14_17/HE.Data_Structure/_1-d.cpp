#include <iostream>
using namespace std;

int main()
{
    int number_Of_element{};

    cin >> number_Of_element;
    int ary[number_Of_element]{};

    for (int i = 0; i < number_Of_element; i++)
    {
        cin >> ary[i];
    }

    for (int j = number_Of_element - 1; j >= 0; j--)
    {
        cout << ary[j] << endl;
    }

    return 0;
}