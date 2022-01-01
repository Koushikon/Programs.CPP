#include <iostream>

using std::cout;
using std::endl;

int main()
{
    /**
     * * Highlight position for bit of interest with a 1
     * * Mask Other position with 0
     */

    const unsigned char mask_bit_0{0b00000001};
    const unsigned char mask_bit_1{0b00000010};
    const unsigned char mask_bit_2{0b00000100};
    const unsigned char mask_bit_3{0b00001000};
    const unsigned char mask_bit_4{0b00010000};
    const unsigned char mask_bit_5{0b00100000};
    const unsigned char mask_bit_6{0b01000000};
    const unsigned char mask_bit_7{0b10000000};

    //Starts with all bits off
    unsigned char value{0b00000000};

    return 0;
}