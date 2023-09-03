/**
 * @file Namespaces.cpp
 * @author Koushik
 * @brief Defining namespaces in C++
 * @version 0.1
 * @date 2021-11-21
 * @link https://www.learncpp.com/cpp-tutorial/user-defined-namespaces-and-the-scope-resolution-operator/ @endlink
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

namespace foo // Define a namespace named foo
{
    // This doSomething() belongs to namespace foo
    int doSomething(int x, int y)
    {
        return x + y;
    }
}

namespace goo // Define a namespace named goo
{
    // This doSomething() belongs to namespace goo
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

int main()
{
    // use the doSomething() that exists in namespace foo
    std::cout << foo::doSomething(4, 3) << std::endl;
    return 0;
}