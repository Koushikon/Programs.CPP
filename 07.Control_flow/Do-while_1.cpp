#include <iostream>

using namespace std;

int main()
{
    // Looping excercise implement with do while loop
    // This type of loop runs at least once

    // Print 1 to 100 Couting
    int i{1};
    do
    {
        cout << i << "  ";
        i++;
    } while (i <= 100);
    cout << endl;

    // Print 100 to 1 Counting
    int x{100};
    do
    {
        cout << x << "  ";
        x--;
    } while (x >= 1);
    cout << endl;

    // Print Name 50 times
    int y{};
    do
    {
        cout << "Koushik  |";
        y++;
    } while (y < 50);
    cout << endl;

    // Print 0 to 10 Counting
    int z{};
    do
    {
        cout << z << "  ";
        z++;
    } while (z < 10);
    cout << endl;

    // Print 7's multiple table
    int ix_table{7}, k{1};
    do
    {
        cout << ix_table << "  X  " << k << ":\t" << (ix_table * k) << endl;
        k++;
    } while (k <= 10);
    cout << endl;

    // Print A to Z
    // A's ASCII decimal value is 65
    int up_pos{};
    char up_alphabet{65};
    do
    {
        cout << up_alphabet++ << "  ";
        up_pos++;
    } while (up_pos < 26);
    cout << endl;

    // Print a to z
    // a's ASCII decimal value is 97
    int sml_pos{};
    char sml_alphabet{97};
    do
    {
        cout << sml_alphabet++ << "  ";
        sml_pos++;
    } while (sml_pos < 26);
    cout << endl;

    return 0;
}