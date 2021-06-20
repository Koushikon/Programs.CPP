#include <iostream>
using namespace std;

int main()
{
    int num1{16}, num2{78};

    cout << "Example_1 (Without boolalpha)" << endl
         << "\tNum1 - " << num1 << ", Num2 - " << num2 << endl
         << "\tEqual - " << (num1 == num2) << endl
         << "\tNot Equal - " << (num1 != num2) << endl
         << "\tEqual - " << (100 == 200) << endl;

    bool result{false};
    num1 = 70, num2 = 70;

    result = (num1 == num2);
    cout << "\nExample_2 (Without boolalpha)" << endl
         << "\tNum1 - " << num1 << ", Num2 - " << num2 << endl
         << "\t(Without boolalpha) Equal - " << result << endl;

    result = (num1 != num2);
    cout << "\t(Without boolalpha) Not Equal - " << result << endl;

    cout << boolalpha;
    result = (num1 == num2);
    cout << "\tEqual (Boolalpha) - " << result << endl;
    result = (num1 != num2);
    cout << "\tNot Equal (Boolalpha) - " << result << endl;
    cout << noboolalpha;

    return 0;
}