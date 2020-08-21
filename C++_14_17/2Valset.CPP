#include <iostream>

void detectLarge(int a, int b)
{
    if (a > b) {    // To make same value of a & b, Here we minus B's value from A and print it.
        std::cout << "\tTo make A & B's value same, We need to minus " << a-b << " from A" << "\n" << "Now, The value of A = " << a-(a-b) << " & B = " << b << std::endl;
    } else  // To make same value of a & b, Here we minus B's value from A and print it.
        std::cout << "\tTo make A & B's value same, We need to minus " << b-a << " from B" << "\n" << "Now, The value of A= " << a << " & B = " << b-(b-a) << std::endl;
}

int main()
{
    int a = 15, b = 207;
    std::cout << "Original value of A = " << a << " & B = " << b << std::endl;
    detectLarge(a, b);
    return 0;
}