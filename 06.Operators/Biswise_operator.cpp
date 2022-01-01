#include <iostream>
#include <bitset> // For std::bitset

using namespace std;

void print_binary_value();
void shift_operators();
void logical_operators();

int main()
{

    cout << "Bitwise operator example :" << endl;

    // Printing integers in Binary
    print_binary_value();

    // Printing Shift operators
    shift_operators();

    // Printing Logical operators
    logical_operators();

    return 0;
}

void print_binary_value()
{
    unsigned short int data{0b11111110};
    cout << "\nData in Decimal " << std::dec << data
         << "\nData in Octal " << std::oct << data
         << "\nData in Hex-Decimal " << std::hex << data
         << "\nData in Binary " << std::bitset<16>(data) << endl;
}

void shift_operators()
{
    unsigned short int value{0xff0u};

    /*
    value >>= value;
    value <<= value;
    */

    std::cout << "\nValue: " << std::bitset<16>(value) << "\tin Decimal: " << std::dec << value << endl;

    cout << "Shifting operators: >> or << " << endl;
    value = static_cast<unsigned short>(value >> 2);
    cout << "Shifting 2 bit right: " << std::bitset<16>(value) << " - " << value << endl;

    value = static_cast<unsigned short>(value << 2);
    cout << "Shifting 2 bit left: " << std::bitset<16>(value) << " - " << value << endl;

    value = static_cast<unsigned short>(value >> 4);
    cout << "Shifting 4 bit right: " << std::bitset<16>(value) << " - " << value << endl;

    value = static_cast<unsigned short>(value << 4);
    cout << "Shifting 4 bit left: " << std::bitset<16>(value) << " - " << value << endl;
}

void logical_operators()
{
    unsigned int a{60}; // 60 = 0011 1100
    unsigned int b{13}; // 13 = 0000 1101
    int cat{}, dog{};
    cout << "\nValue of a is : " << a << endl
         << "Value of b is : " << b << endl;

    // It's like AND Operation in Computer Arithmetic
    cat = a & b; // 12 = 0000 1100
    dog &= b;    // Or use this
    cout << "Value of AND cat is : " << cat << " - " << dog << endl;

    // It's like OR Operation in Computer Arithmetic
    cat = a | b; // 61 = 0011 1101
    dog |= b;    // Or use this
    cout << "Value of OR cat is : " << cat << " - " << dog << endl;

    // It's like NOT Operation in Computer Arithmetic
    cat = ~a; // -61 = 1100 0011
    cout << "Value of NOT cat is : " << cat << endl;

    // It's like XOR Operation in Computer Arithmetic
    cat = a ^ b; // 49 = 0011 0001
    dog ^= b;    // Or use this
    cout << "Value of XOR cat is : " << cat << " - " << dog << endl;
}