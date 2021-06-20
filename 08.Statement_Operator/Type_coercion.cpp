// C++ type coercion example
#include <iostream>
using namespace std;

int main()
{
    int num{0};

    num = 12.5;
    cout << num << " The Higher is demoted to a Lower | float to int (12.5 to 12)" << endl;

    cout << 2 * 5.2 << " The Lower is demoted to a Higher | int to float (2.0 * 5.2)" << endl;

    num = 100.2;
    cout << num << " The Higher is demoted to a Lower | float to int (100.2 to 100)" << endl;

    int total_amount{100}, total_number{8};
    double average{0.0};

    average = total_amount / total_number;
    cout << average << " Since two variables are integer, the compiler will do integer division and that would be 12 | Majority Wins" << endl;

    average = static_cast<double>(total_amount) / total_number;
    cout << average << " With static_cast now one variable is double and another one was previously double, The compiler will conver the last interger variable to double and do double division and that would be 12.5" << endl;

    return 0;
}