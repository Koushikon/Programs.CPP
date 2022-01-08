#include <iostream>

using std::cout;
using std::endl;

/**
 * * A Real life masking example
 */

const unsigned char mask_bit_0{0b00000001};
const unsigned char mask_bit_1{0b00000010};
const unsigned char mask_bit_2{0b00000100};
const unsigned char mask_bit_3{0b00001000};
const unsigned char mask_bit_4{0b00010000};
const unsigned char mask_bit_5{0b00100000};
const unsigned char mask_bit_6{0b01000000};
const unsigned char mask_bit_7{0b10000000};

void mask_ex_v1(bool flag0, bool flag1, bool flag2, bool flag3, bool flag4, bool flag5, bool flag6, bool flag7)
{
    cout << "\nFlag 0 is " << flag0
         << "\nFlag 1 is " << flag1
         << "\nFlag 2 is " << flag2
         << "\nFlag 3 is " << flag3
         << "\nFlag 4 is " << flag4
         << "\nFlag 5 is " << flag5
         << "\nFlag 6 is " << flag6
         << "\nFlag 7 is " << flag7 << '\n';
}

void mask_ex_v2(unsigned char flags)
{
    cout << "\nBit 0 is " << ((flags & mask_bit_0) >> 0)
         << "\nBit 1 is " << ((flags & mask_bit_1) >> 1)
         << "\nBit 2 is " << ((flags & mask_bit_2) >> 2)
         << "\nBit 3 is " << ((flags & mask_bit_3) >> 3)
         << "\nBit 4 is " << ((flags & mask_bit_4) >> 4)
         << "\nBit 5 is " << ((flags & mask_bit_5) >> 5)
         << "\nBit 6 is " << ((flags & mask_bit_6) >> 6)
         << "\nBit 7 is " << ((flags & mask_bit_7) >> 7) << '\n';
}

int main()
{
    // 00111010 is 58 in dec
    mask_ex_v1(0, 0, 1, 1, 1, 0, 1, 0);
    // same as vefore 00111010
    mask_ex_v2(mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_6);
    return 0;
}