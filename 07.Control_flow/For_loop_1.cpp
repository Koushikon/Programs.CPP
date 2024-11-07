#include <iostream>

using namespace std;

int main()
{
    // Looping excercise implement with for loop

    // Print 1 to 100 Couting
    for (int i{1}; i <= 100; i++)
    {
        cout << i << "  ";
    }
    cout << endl;

    // Print 100 to 1 Counting
    for (int x{100}; x >= 1; x--)
    {
        cout << x << "  ";
    }
    cout << endl;

    // Print Name 50 times
    for (int y{}; y < 50; y++)
    {
        cout << "Koushik  |";
    }
    cout << endl;

    // Print 0 to 10 Counting
    for (int z{}; z < 10; z++)
    {
        cout << z << "  ";
    }
    cout << endl;

    // Print 7's multiple table
    int ix_table{7};
    for (int k{1}; k <= 10; k++)
    {
        cout << ix_table << "  x   " << k << ":\t" << (ix_table * k) << endl;
    }
    cout << endl;

    // Print A to Z
    // A's ASCII decimal value is 65
    char up_alphabet{65};
    for (int c{}; c < 26; c++)
    {
        cout << up_alphabet++ << "  ";
    }
    cout << endl;

    // Print a to z
    // a's ASCII decimal value is 97
    char sml_alphabet{97};
    for (int d{}; d < 26; d++)
    {
        cout << sml_alphabet++ << "  ";
    }
    cout << endl;

    return 0;
}