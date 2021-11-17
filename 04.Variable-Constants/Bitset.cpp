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

using std::cout;
using std::endl;

int main()
{
    std::bitset<8> b1(42);
    for (std::size_t i = 0; i < b1.size(); ++i)
    {
        std::cout << "b1[" << i << "]: " << b1[i] << '\n';
    }
    b1[0] = true; // modifies the first bit through bitset::reference
    std::cout << "After setting bit 0, the bitset holds " << b1 << '\n';

    std::bitset<4> b11("0000");
    std::bitset<4> b2("0101");
    std::bitset<4> b3("1111");

    std::cout
        << "bitset\t all\t any\t none\n"
        << b11 << '\t' << b11.all() << '\t' << b11.any() << '\t' << b11.none() << '\n'
        << b2 << '\t' << b2.all() << '\t' << b2.any() << '\t' << b2.none() << '\n'
        << b3 << '\t' << b3.all() << '\t' << b3.any() << '\t' << b3.none() << '\n';

    std::bitset<8> b(42);
    std::cout << "Bitset is         " << b << '\n';
    b.reset(1);
    std::cout << "After b.reset(1): " << b << '\n';
    b.reset();
    std::cout << "After b.reset():  " << b << '\n';
    return 0;
}