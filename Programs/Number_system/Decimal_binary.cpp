// Decimal to binary number conversion

#include <iostream>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void display_menu();
char choose_menu();

void take_decimal(int &dcml);
int binary_array_space(const int &dcml);
void binary_calculate(int &dcml, vector<int> &bin, const int &space);
void display_binary(const vector<int> &bin);
void leave();
void default_selection();

int main()
{
    char choose{};

    do
    {
        display_menu();
        choose = choose_menu();

        switch (choose)
        {
        case 'B':
        {
            int decimal{};
            take_decimal(decimal);

            int bin_space{};
            bin_space = binary_array_space(decimal);

            vector<int> binary(bin_space);

            binary_calculate(decimal, binary, bin_space);

            display_binary(binary);
        }
        break;

        case 'D':
        {
        }
        break;

        case 'Q':
            leave();
            break;

        default:
            default_selection();
            break;
        }

    } while (choose != 'Q');

    return 0;
}

void display_menu()
{
    cout << "\n\n==========================" << endl
         << "| Press," << endl
         << "|\tB-- >> For Decimal to Binary conversion." << endl
         << "|\tD -->> For Binary to Decimal conversion." << endl
         << "|\tQ -->> To quit." << endl
         << "|\tSo, What's your choice? ";
}

char choose_menu()
{
    char menu{};
    cin >> menu;
    return toupper(menu);
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

void binary_calculate(int &dcml, vector<int> &bin, const int &space)
{
    for (auto i{space - 1}; i >= 0; --i)
    {
        bin.at(i) = dcml % 2;
        dcml /= 2;
    }
}

void display_binary(vector<int> &bin)
{
    for (auto &val : bin)
        cout << val << "\t";
    cout << endl;
}

void leave()
{
    cout << "\tGood bye..." << endl;
}

void default_selection()
{
    cout << "\tUnknown selection, Please try again.";
}