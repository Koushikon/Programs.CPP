// Decimal to binary number conversion

#include <iostream>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void take_decimal(int &dcml);
int binary_array_space(const int &dcml);
void binary_calculate(int &dcml, vector<bool> &bin, const int &space);
void display_binary(const vector<bool> &bin);

int main()
{

    int decimal{};
    take_decimal(decimal);

    int bin_space{};
    bin_space = binary_array_space(decimal);

    vector<bool> binary(bin_space);

    binary_calculate(decimal, binary, bin_space);

    display_binary(binary);

    return 0;
}

void take_decimal(int &dcml)
{
    cout << "Enter the decimal No. - ";
    cin >> dcml;
}

int binary_array_space(const int &dcml)
{
    static int exponent{1};

    while (true)
    {
        if (pow(2, exponent) > dcml)
            break;
        exponent++;
    }
    return exponent;
}

void binary_calculate(int &dcml, vector<bool> &bin, const int &space)
{
    for (auto i{space - 1}; i >= 0; --i)
    {
        bin.at(i) = dcml % 2;
        dcml /= 2;
    }
}

void display_binary(const vector<bool> &bin)
{
    for (auto val : bin)
        cout << val << "\t";
    cout << endl;
}