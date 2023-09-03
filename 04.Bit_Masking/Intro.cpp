#include <iostream>
#include <bitset>

using std::cout;
using std::endl;

/**
 * * Bit Masking Intro
 * * Thanks to Daniel Gakwaya
 * * More info
 * @link https://stackoverflow.com/questions/10493411/what-is-bit-masking#:~:text=A%20mask%20defines%20which%20bits,the%20bits%20in%20the%20value
 */

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
    unsigned char val{0b00000000};

    char COLUMN_WIDTH{8};

    cout << "Bit values in binary: " << std::bitset<8>(val) << '\n';

    cout << "\nBitwise OR with Mask\n";

    val |= mask_bit_0;
    cout << "Set Bit position 0: " << std::bitset<8>(val) << '\n';

    val |= mask_bit_5;
    cout << "Set Bit position 5: " << std::bitset<8>(val) << '\n';

    cout << "\nBitwise AND with TOGGLE with Mask\n";
    val = 0b01110111;

    val &= ~mask_bit_0;
    cout << "Set Bit position 0: " << std::bitset<8>(val) << '\n';

    val &= ~mask_bit_5;
    cout << "Set Bit position 5: " << std::bitset<8>(val) << '\n';

    /**
     * * Masking multiple bit at once
     */
    val = 0b00000000;
    cout << "\nSetting all bits" << '\n';

    val |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    cout << "After Set all bit: " << std::bitset<8>(val) << '\n';

    /**
     * * Reset multiple bit 0, 2, 4, 6 at once
     */
    val &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
    cout << "After Reset 0, 2, 4, 6 bit: " << std::bitset<8>(val) << '\n';

    /**
     * * Shifting right to 5 bit and do AND like below
     */
    cout << "\nChecking the state of each bit position (Set/Reset)\n";

    val = 0b00000000;
    cout << "Bit 0 is " << ((val & mask_bit_0) >> 0) << '\n';
    cout << "Bit 1 is " << ((val & mask_bit_1) >> 1) << '\n';
    cout << "Bit 2 is " << ((val & mask_bit_2) >> 2) << '\n';
    cout << "Bit 3 is " << ((val & mask_bit_3) >> 3) << '\n';
    cout << "Bit 4 is " << ((val & mask_bit_4) >> 4) << '\n';
    cout << "Bit 5 is " << ((val & mask_bit_5) >> 5) << '\n';

    cout << "Bit 6 is " << ((val & mask_bit_6) >> 6) << '\n';
    cout << "Bit 6 is " << static_cast<bool>(val & mask_bit_6) << '\n';

    cout << std::boolalpha;
    cout << "Bit 7 is " << ((val & mask_bit_7) >> 7) << '\n';
    cout << "Bit 7 is " << static_cast<bool>(val & mask_bit_7) << '\n';

    /**
     * * Toggle Bits with XOR Operator ^ 
     */
    cout << "\nXOR Operator with Mask\n";

    val = 0b01011001;
    val ^= mask_bit_0;
    cout << "After flipping with XOR position 0 is" << std::bitset<8>(val) << '\n';

    val ^= mask_bit_7;
    cout << "After flipping with XOR position 7 is" << std::bitset<8>(val) << '\n';

    return 0;
}