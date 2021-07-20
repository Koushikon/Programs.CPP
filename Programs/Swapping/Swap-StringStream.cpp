
#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::istringstream;
using std::ostringstream;
using std::string;

int main()
{

    istringstream one("one");
    ostringstream two("two");

    std::cout << "Before swap one = " << one.str() << " and two = " << two.str() << std::endl;

    swap(*one.rdbuf(), *two.rdbuf());
    // one.rdbuf()->swap(*two.rdbuf()); // Or this

    cout << "Before swap one = " << one.str() << " and two = " << two.str() << endl;

    return 0;
}