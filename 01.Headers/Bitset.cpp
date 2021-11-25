/**
 * @file Bitset.cpp
 * @author Koushik and from C++ Courses
 * @brief <bitset> header stuff
 * @version 0.1
 * @date 2021-11-15
 * @link https://en.cppreference.com/w/cpp/utility/bitset @endlink
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <bitset>
#include <string>
#include <limits>

using std::cout;
using std::endl;

void define_bitset();
void access_specific_bit();
void check_bits();
void flip_bits();
void set_bits();
void reset_bits();
void bitset_str_conversion();
void bitset_int_conversion();

int main()
{
    // Contructor Initialize of bitset
    define_bitset();

    // bit[], test()
    access_specific_bit();

    // all(), any(), none() and count()
    check_bits();

    // flip()
    flip_bits();

    // set()
    set_bits();

    // reset()
    reset_bits();

    // to_string()
    bitset_str_conversion();

    // to_ulong(), to_ullong()
    bitset_int_conversion();

    return 0;
}

void define_bitset()
{
    std::bitset<8> b1;
    std::bitset<8> bl(42);
    std::bitset<8> bl2{42};
    std::bitset<8> bs(0xFFF0); // Only takes the 8-bits
    std::bitset<8> bs2{0xFFF0};

    cout << "\nB1: " << b1 << "\tBL: " << bl << "\tBL2: " << bl2 << "\nBS: " << bs << "\tBS2: " << bs2 << '\n';

    std::bitset<70> b2(ULLONG_MAX);
    // String constructor
    std::string bit_str{"110010"};
    std::bitset<8> b3(bit_str);
    std::bitset<8> b4(bit_str, 2);
    std::bitset<8> b5(bit_str, 2, 3);
    cout << "B2: " << b2 << "B3: " << b3 << "\tB4: " << b4 << "\tB5: " << b5 << '\n';

    // String constructor using 0/1
    std::string alpha_str{"aBaaBBaB"};
    // Here, 'a' is for 0 and 'B' is for 1
    std::bitset<8> b6(alpha_str, 0, alpha_str.size(), 'a', 'B');
    // Here, 'X' is for 0 and 'Y' is for 1
    std::bitset<8> b7("XXXXYYYY", 8, 'X', 'Y');
    cout << "B6: " << b6 << "\tB7: " << b7 << '\n';
}

void access_specific_bit()
{
    /**
     * @brief operator[] to access specific bit
     * 
     */
    std::bitset<8> boo(42);

    cout << "\nIt's Opposit: ";
    for (size_t i{}; i < boo.size(); ++i)
        cout << boo[i] << ' ';
    cout << '\n';

    // Modifies the first bit through bitset::reference
    boo[0] = 1;

    cout << "After setting bit 0, the bitset: " << boo << '\n';

    /**
     * @brief test() method to access specific bit
     * 
     * @details Unlike operator[], It performs a bounds
     * check and throws std::out_of_range if pos does
     * not correspond to a valid position in the bitset.
     * 
     */
    std::bitset<10> boom3("1111010000");

    if (boom3.test(4)) // Check in reverse order
        cout << "\nBit 4 is set\n";
    else
        cout << "\nBit 4 is not set\n";
}

void check_bits()
{
    std::bitset<4> b11("0000");
    std::bitset<4> b21("0101");
    std::bitset<4> b31("1111");

    cout << '\n'
         << b11 << '\t' << b21 << '\t' << b31 << '\n';

    cout << std::boolalpha;
    cout << "all:\t" << b11.all() << '\t' << b21.all() << '\t' << b31.all() << '\n';

    cout << "any:\t" << b11.any() << '\t' << b21.any() << '\t' << b31.any() << '\n';

    cout << "none:\t" << b11.none() << '\t' << b21.none() << '\t' << b31.none() << '\n';

    cout << std::noboolalpha;

    cout << "count:\t" << b11.count() << '\t' << b21.count() << '\t' << b31.count() << '\n';
}

void flip_bits()
{
    std::bitset<4> boom;

    // Flips the bit
    std::cout << '\n'
              << boom << '\n';
    std::cout << boom.flip(0) << '\n';
    std::cout << boom.flip(2) << '\n';
    std::cout << boom.flip() << '\n';
}

void set_bits()
{
    std::bitset<8> tick; //

    tick.set();
    cout << '\n'
         << tick << '\n';
    tick.set(2, 0);
    cout << tick << '\n';
}

void reset_bits()
{
    std::bitset<8> boo(42);
    cout << "\nBitset is: " << boo << '\n';

    boo.reset(1); // reset bit 1
    cout << "After reset(1): " << boo << '\n';

    boo.reset(); // reset all bits
    cout << "After reset():  " << boo << '\n';
}

void bitset_str_conversion()
{
    // bitset to string conversion
    std::bitset<8> bs1{"10101010"};
    std::string str1 = bs1.to_string();
    cout << "\nStr1: " << str1 << '\n';
    cout << std::bitset<32>().to_string('-') << '\n';
}

void bitset_int_conversion()
{
    /**
     * @brief bitset to unsigned long conversion
     * 
     */
    std::bitset<8> bs2{"10101010"};
    unsigned long long ul1 = bs2.to_ulong();
    cout << "\nULL1: " << ul1 << '\n';
    try
    {
        std::bitset<128> x(42);
        std::cout << x.to_ulong() << '\n';
        x.flip();
        std::cout << x.to_ulong() << '\n'; // throws
    }
    catch (const std::overflow_error &ex)
    {
        std::cout << "ex: " << ex.what() << '\n';
    }

    /**
     * @brief bitset to unsigned long long conversion
     * 
     */
    std::bitset<8> bs3{"10101010"};
    unsigned long long ull1 = bs3.to_ullong();
    std::bitset<std::numeric_limits<unsigned long long>::digits> ull2(0x123456789abcdef0LL);

    cout << '\n'
         << ull1 << '\n';
    cout << ull2 << "  " << std::hex << ull2.to_ullong() << '\n';
    ull2.flip();
    cout << ull2 << "  " << ull2.to_ullong() << '\n';
}