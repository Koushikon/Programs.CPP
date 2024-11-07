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

// Decimal to binary number conversion

// #include <iostream>
// #include <vector>
// #include <cmath>

// using std::cin;
// using std::cout;
// using std::endl;
// using std::vector;

// void display_menu();
// char choose_menu();

// void take_decimal(int &dcml);
// int binary_array_space(const int &dcml);
// void binary_calculate(int &dcml, vector<bool> &bin, const int &space);
// void display_binary(const vector<bool> &bin);
// void leave();
// void default_selection();

// int main()
// {
//     char choose{};

//     do
//     {
//         display_menu();
//         choose = choose_menu();

//         switch (choose)
//         {
//         case 'B':
//         {
//             int decimal{};
//             take_decimal(decimal);

//             int bin_space{};
//             bin_space = binary_array_space(decimal);

//             vector<bool> binary(bin_space);

//             binary_calculate(decimal, binary, bin_space);

//             display_binary(binary);
//         }
//         break;

//         case 'D':
//         {
//         }
//         break;

//         case 'Q':
//             leave();
//             break;

//         default:
//             default_selection();
//             break;
//         }

//     } while (choose != 'Q');

//     return 0;
// }

// void display_menu()
// {
//     cout << "\n\n==========================" << endl
//          << "| Press," << endl
//          << "|\tB-- >> For Decimal to Binary conversion." << endl
//          << "|\tO -->> For Decimal to Octal conversion." << endl
//          << "|\tH -->> For Decimal to Hexa-Decimal conversion." << endl
//          << "|\tQ -->> To quit." << endl
//          << "|\tSo, What's your choice? ";
// }

// char choose_menu()
// {
//     char menu{};
//     cin >> menu;
//     return toupper(menu);
// }

// void take_decimal(int &dcml)
// {
//     cout << "Enter the decimal No. - ";
//     cin >> dcml;
// }

// int binary_array_space(const int &dcml)
// {
//     static int exponent{1};

//     while (true)
//     {
//         if (pow(2, exponent) > dcml)
//             break;
//         exponent++;
//     }
//     return exponent;
// }

// void binary_calculate(int &dcml, vector<bool> &bin, const int &space)
// {
//     for (auto i{space - 1}; i >= 0; --i)
//     {
//         bin.at(i) = dcml % 2;
//         dcml /= 2;
//     }
// }

// void display_binary(const vector<bool> &bin)
// {
//     for (auto val : bin)
//         cout << val << "\t";
//     cout << endl;
// }

// void leave()
// {
//     cout << "\tGood bye..." << endl;
// }

// void default_selection()
// {
//     cout << "\tUnknown selection, Please try again.";
// }