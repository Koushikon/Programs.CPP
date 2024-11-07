#include <iostream>

using namespace std;

int main()
{
    // Looping excercise implement with while loop

    // Print 1 to 100 Couting
    int i{1};
    while (i <= 100)
    {
        cout << i << "  ";
        i++;
    }
    cout << endl;

    // Print 100 to 1 Counting
    int x{100};
    while (x >= 1)
    {
        cout << x << "  ";
        x--;
    }
    cout << endl;

    // Print Name 50 times
    int y{};
    while (y < 50)
    {
        cout << "Koushik  |";
        y++;
    }
    cout << endl;

    // Print 0 to 10 Counting
    int z{};
    while (z < 10)
    {
        cout << z << "  ";
        z++;
    }
    cout << endl;

    // Print 7's multiple table
    int ix_table{7}, k{1};
    while (k <= 10)
    {
        cout << ix_table << "  x   " << k << ":\t" << (ix_table * k) << endl;
        k++;
    }
    cout << endl;

    // Print A to Z
    // A's ASCII decimal value is 65
    int up_pos{};
    char up_alphabet{65};
    while (up_pos < 26)
    {
        cout << up_alphabet++ << "  ";
        up_pos++;
    }
    cout << endl;

    // Print a to z
    // a's ASCII decimal value is 97
    int sml_pos{};
    char sml_alphabet{97};
    while (sml_pos < 26)
    {
        cout << sml_alphabet++ << "  ";
        sml_pos++;
    }
    cout << endl;

    return 0;
}