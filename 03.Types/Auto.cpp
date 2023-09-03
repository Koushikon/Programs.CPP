// Primitive Types

#include <iostream>

int main()
{
    auto var1{12};
    auto var2{13.6};
    auto var3{15.0f};
    auto var4{15.0l};
    auto var5{'e'};

    auto var6{123u};
    auto var7{1234ul};
    auto var8{12345ll};

    std::cout << var1 << " " << sizeof(var1) << std::endl
              << var2 << " " << sizeof(var2) << std::endl
              << var3 << " " << sizeof(var3) << std::endl
              << var4 << " " << sizeof(var4) << std::endl
              << var5 << " " << sizeof(var5) << std::endl
              << var6 << " " << sizeof(var6) << std::endl
              << var7 << " " << sizeof(var7) << std::endl
              << var8 << " " << sizeof(var8) << std::endl;

    auto var11{333u};

    // var11 = -55; // It will not work. ERROR
    std::cout << var11 << " " << sizeof(333u) << std::endl;

    return 0;
}