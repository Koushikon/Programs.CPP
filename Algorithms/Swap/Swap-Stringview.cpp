// Swapping String view contents like EMOJI's 😒
#include <string_view>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    auto s1{std::string_view{"Car 🚗, Truck 🚚,"}};
    auto s2{std::string_view{"Burger 🍔, Popcorn 🍟,"}};

    cout << "Before : " << s1 << '\t' << s2 << endl;
    // Work this way
    s1.swap(s2);
    cout << "After  : " << s1 << '\t' << s2 << endl;
    // Or can work this way
    swap(s1, s2);
    cout << "Then After  : " << s1 << '\t' << s2 << endl;

    return 0;
}