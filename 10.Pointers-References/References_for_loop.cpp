#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> name{"Many", "Billy", "Tally"};

    for (auto str : name)
        str = "Fun"; // Changes made in copy not in the actual vector
    for (auto str : name)
        cout << str << endl;

    cout << endl;

    for (auto &str : name)
        str = "Fun"; // Changes made in the actual vector using Reference
    for (auto str : name)
        cout << str << endl;

    cout << endl;

    /*
    for (auto const &str : name)
        str = "Fun"; // Compiler error, Because const cannot be re-assigned
    */

    for (auto &str : name)
        cout << str << endl;

    return 0;
}