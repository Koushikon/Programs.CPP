// Inserting the number in hex form into the stringstream
#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::hex;
using std::string;
using std::stringstream;

int main()
{
    stringstream text;
    int number{61};

    // Add the number (hex format) in Stringstream
    text << hex << number;
    cout << text.str() << endl;

    text.str(" "); // Add space between these numbers

    // Adding another number
    text << hex << number - 15;
    cout << text.str() << endl;

    return 0;
}