#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num1{-5};
    long num2{-2371041};

    cout << " |" << num1 << "| = " << abs(num1) << endl;
    cout << " |" << num2 << "| = " << abs(num2) << endl;

    long int l_num1{-9999999L}, l_num2{10000000L};

    cout << " |" << l_num1 << "| = " << labs(l_num1) << endl;
    cout << " |" << l_num2 << "| = " << labs(l_num2) << endl;

    return 0;
}