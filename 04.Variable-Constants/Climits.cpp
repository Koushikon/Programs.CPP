#include <iostream>

// This header was originally in the C standard library as <limits.h>
#include <climits>

using namespace std;

int main()
{
    cout << "\n\nThis defined in <climits>\n========================" << endl;

    cout << "\t---------Minimum Values---------" << endl;
    cout << "| char = " << CHAR_MIN << endl;
    cout << "| Signed char = " << SCHAR_MIN << endl;
    cout << "| short = " << SHRT_MIN << endl;
    cout << "| int = " << INT_MIN << endl;
    cout << "| long = " << LONG_MIN << endl;
    cout << "| long long = " << LLONG_MIN << endl;

    cout << "\n\t--------Maximum Values--------" << endl;
    cout << "| char = " << CHAR_MAX << endl;
    cout << "| Signed char = " << SCHAR_MAX << endl;
    cout << "| short = " << SHRT_MAX << endl;
    cout << "| int = " << INT_MAX << endl;
    cout << "| long = " << LONG_MAX << endl;
    cout << "| long long = " << LLONG_MAX << endl;

    cout << "\n\t------------------------------" << endl;

    cout << "| Unsigned char = " << UCHAR_MAX << endl;
    cout << "| Unsigned short = " << USHRT_MAX << endl;
    cout << "| Unsigned int = " << UINT_MAX << endl;
    cout << "| Unsigned long = " << ULONG_MAX << endl;
    cout << "| Unsigned long long = " << ULLONG_MAX << endl;

    cout << "\n\t------------------------------" << endl;

    cout << boolalpha;
    cout << "char and Signed char Min are the same: " << (CHAR_MIN == SCHAR_MIN) << endl;
    cout << "char and Signed char Max are the same: " << (CHAR_MAX == SCHAR_MAX) << endl;
    cout << noboolalpha;

    return 0;
}