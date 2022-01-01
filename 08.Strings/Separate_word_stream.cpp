#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::vector;

int main()
{
    string fruits{"[🍌Banana] [🍎Apple] [🍉Watermelon] [🍒Cherry] [🥥Coconut] [🍇Grapes] [🍋Lemon]"};
    stringstream word(fruits); // string separated by space
    vector<string> fruit_nm{};

    string tmp{};
    while (word >> tmp)
        fruit_nm.push_back(tmp);

    for (auto const &name : fruit_nm)
        cout << name << endl;

    return 0;
}