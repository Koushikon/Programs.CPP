#include <iostream>
using namespace std;

int main()
{
    /*
    // Example - 1 with conditional operators.
    int a{10}, b{20}, score{92}, result_1{}, result_2{}, result_3{};
    result_1 = (a > b) ? a : b;
    result_2 = (a < b) ? (b - a) : (a - b);
    result_3 = (b != 0) ? (b / a) : 0;
    cout << "Result 1: " << result_1 << ", Result 2: " << result_2 << ", Result 3: " << result_3 << ((score > 90) ? ", Excellent" : ", Good") << endl;
    */

    /*
    // Example - 2
    int num{};
    cout << "Enter your number: ";
    cin >> num;

    // if (num % 2 == 0)
    //     cout << num << " is even" << endl;
    // else
    //     cout << num << " is odd" << endl;
    
    cout << num << " is " << ((num % 2 == 0) ? "Even" : "Odd") << endl;
    */

    // Example - 3
    int num1{}, num2{};
    cout << "Enter 2 integers separated by space: ";
    cin >> num1 >> num2;

    if (num1 != num2)
    {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl
             << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else
    {
        cout << "The numbers are the same." << endl;
    }
    return 0;
}