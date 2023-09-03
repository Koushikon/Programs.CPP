#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

char End_char_of_2(size_t &j);
string End_char_of_3(size_t &j, size_t &k);

int main()
{
    /**
     * * Declaring Multi-Dimensional Array
     * ? Note: Multi-Dimensional Array have bounds for all dimensions except the last first like below:
     */
    int package[][3]{
        {7, 8, 9},
        {4, 5, 6},
        {1, 2, 3}};

    // Display 2-Dimensional Array
    for (size_t i{}; i < std::size(package); i++)
        for (size_t j{}; j < std::size(package[i]); j++)
            cout << package[i][j] << End_char_of_2(j);
    cout << endl;

    int scope[][3][2]{
        {{7, 7}, {8, 8}, {9, 9}},
        {{4, 4}, {5, 5}, {6, 6}},
        {{1, 1}, {2, 2}, {3, 3}}};

    // Display 3-Dimensional Array
    for (size_t i{}; i < std::size(scope); i++)
        for (size_t j{}; j < std::size(scope[i]); j++)
            for (size_t k{}; k < std::size(scope[i][j]); k++)
                cout << scope[i][j][k] << End_char_of_3(j, k);
    cout << endl;

    /**
     * * Initializing Multi-Dimensional Array
     */
    scope[1][2][1] = 111;
    cout << scope[1][2][1] << endl;

    return 0;
}

char End_char_of_2(size_t &j) { return ((j == 2) ? '\n' : ' '); }

string End_char_of_3(size_t &j, size_t &k)
{
    return ((j == 2 && k == 1) ? "\n"
            : (k == 1)         ? " | "
                               : " ");
}