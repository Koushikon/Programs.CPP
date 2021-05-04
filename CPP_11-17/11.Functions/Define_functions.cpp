#include <iostream>

/* 
// 1st_one
void say_hallo()
{
    std::cout << "Hello" << std::endl;

    //optional
    // return;
}*/

/*
// 2nd_one
void say_hallo()
{
    for (int i{}; i < 5; ++i)
        std::cout << "Hallo" << std::endl;
}*/

/*
// 3rd_one
void say_world()
{
    std::cout << " World" << std::endl;
}

void say_hallo()
{
    std::cout << "Hallo";
    say_world();
}*/

// 4th_one
void say_world()
{
    std::cout << " World" << std::endl
              << "End World" << std::endl;
}

void say_hallo()
{
    std::cout << "Hallo";
    say_world();
    std::cout << "End Hallo" << std::endl;
}

int main()
{
    /*
    Functions can call other functions
    Compiler must know the function details before its called

    Execution allways begin with main function
    */

    // 1st_one
    // say_hallo();

    // 2nd_one
    // say_hallo();

    // 3rd_one
    // say_hallo();

    // 4th_one
    say_hallo();
    std::cout << "End Main" << std::endl;

    return 0;
}