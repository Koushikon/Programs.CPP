#include <iostream>

using std::cout;
using std::endl;

int main()
{
    const int count{5};

    /**
     * * We could use decrementing for loop like this.
     * * With Range For loop we cannot decrement the loop counter
     */

    cout << "Decrementing Loop\n";
    for (size_t i{count}; i > 0; i--)
        cout << i << ' ';
    cout << '\n';

    // Decrementing while loop
    int i = count;
    while (i > 0)
    {
        cout << i << ' ';
        i--;
    }
    cout << '\n';

    // Decrementing do while loop
    i = count;
    do
    {
        cout << i << ' ';
        i--;
    } while (i > 0);

    /**
     * * Here We are decrementing the loop counter until it reaches 0
     * * But with size_t we cannot have negative value its an unsigned variable
     * * But when reaches 0 and decrement normally would be -1
     * * In our case because of size_t it underflows and becomes really big number
     * * and its goes to infinite loop
     */
    for (size_t i{count}; i >= 0; i--)
        cout << i << '\n';

    return 0;
}