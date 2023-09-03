#include <iostream>

using std::cout;
using std::endl;

int main()
{
    /**
     * * The Comma Operator Combines with
     * * Two or More expressions into a single expression
     * * Where the value of the operation is the value of its right operand.
     */

    int increment{5};
    int num1{10};
    int num2{20};
    int num3{30};

    // Stores last operand value
    int result = (num1 *= ++increment, num2 - (++increment), num3 += ++increment);

    cout << "\nNumber 1: " << num1          // 60
         << ", Number 2: " << num2          // 20
         << ", Number 3: " << num3          // 38
         << ", Result: " << result << '\n'; // 38

    /**
     * * Comma Operator with Loop
     */
    for (size_t x{}, y{5}, z{20}; z > 15; x++, y += 5, z--)
    {
        cout << "X: " << x << ", Y: " << y << ", Z: " << z << endl;
    }

    return 0;
}