//Example of Precision Program//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int a = 10;
    float b = 374.8390;

    cout << "\n A= " << setw(10) << a;
    cout << "\n B= " << cout.precision(8) << b;
    cout << "\n B= " << setprecision(3) << b;
    return 0;
}