// C++ program to parse a comma-separated string
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::vector;

int main()
{
    string str_numbers{"1,2,3,4,5,6"};
    vector<string> parse_str;

    stringstream strm(str_numbers);

    while (strm.good())
    {
        string substr{};
        getline(strm, substr, ',');
        parse_str.push_back(substr);
    }

    for (auto const &s : parse_str)
        cout << s << " | ";
}