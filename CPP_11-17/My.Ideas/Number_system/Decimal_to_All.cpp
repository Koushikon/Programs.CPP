// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int decimal_number{};
//     vector<int> binary_number(64);
//     cout << "Enter the Decimal No. - ";
//     cin >> decimal_number;

//     // Decimal to Binary Convertion
//     cout << "\t" << decimal_number << " This number's equvalent binary number is "
//          << "(";

//     int counter{};
//     while (decimal_number > 0)
//     {
//         binary_number.at(counter) = decimal_number % 2;
//         decimal_number /= 2;

//         ++counter;
//     }

//     for (int i{counter - 1}; i >= 0; --i)
//         cout << binary_number.at(i);
//     cout << ")" << endl;

//     return 0;
// }

// C++ implementation of the approach
#include <cmath>
#include <iostream>

using namespace std;

#define ull unsigned long long int

// Function to return the binary equivalent of decimal value N
int decimalToBinary(int N)
{

    // To store the binary number
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0)
    {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;

        // Count used to store exponent value
        cnt++;
    }

    return B_Number;
}

int main()
{

    int N{};
    cin >> N;

    cout << decimalToBinary(N);

    return 0;
}