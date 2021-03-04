//Real Number Precision Set using Format specifiers.

#include <iostream>
// iomanip - input output manipulation Library
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;

int main()
{
    float real_numer_1{10.267F};
    double real_numer_2{374.8391347};

    // ------- setw(), fixed, setprecision function uses std namespace. So, declare them properly

    // setw() function sets total width including "." (Points), after and before values,
    // For ex.- it "shows 3-spaces, "."(Point) and 6 word" total 10 word.
    cout << "\n A= " << setw(10) << real_numer_1;

    // precision function sets how many digits you want to add after "." (Point).
    // fixed keyword (convert the number to fixed decimal number).
    cout.precision(9);
    cout << "\n B= " << fixed << real_numer_2;

    // setprecision function set the total number of digits after "." (Point).
    // Also after or before use setprecision we must use fixed keyword too.
    // Here we allready declared in above.
    cout << "\n B= " << setprecision(5) << real_numer_2 << endl;
    return 0;
}