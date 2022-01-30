#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;

int main()
{
    // string names{};
    stringstream names("James Ine Robbin Biro Okm"); // Parse string words using space

    string tmp{};
    int count{};
    while (names >> tmp)
        count++;

    cout << "No. of names in 'names' variable are " << count << endl;

    return 0;
}