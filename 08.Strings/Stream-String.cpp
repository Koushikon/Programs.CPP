#include <iostream>
#include <sstream>
#include <string>

using std::boolalpha;
using std::cout;
using std::endl;
using std::ios_base;
using std::istringstream;
using std::ostringstream;
using std::string;

int main()
{
    // input string stream ("1 2") in i_stm variable
    istringstream i_stm;
    i_stm.str("1 2");
    int num1{};

    i_stm >> num1;
    cout << i_stm.str() << " extract " << num1 << endl;

    cout << " ======================= " << endl;
    // output string stream ("900") in o_stm variable
    ostringstream o_stm("900");
    int num2{51};

    o_stm << num2;
    cout << o_stm.str() << " insert " << num2 << endl;

    // output string stream ("900") in o_stm variable and appending 2
    ostringstream o_stm2("900", std::ios_base::ate);
    o_stm2 << 51;
    cout << o_stm2.str() << " append " << 51 << endl;

    cout << " ======================= " << endl;
    // Extracting from string stream different values and store them into specific variables
    istringstream i_stm3("41 3.14 false Hello");
    int num{};
    double real{};
    bool bin{};

    i_stm3 >> num >> real >> boolalpha >> bin;
    cout << "number = " << num << ", real = " << real << ", bool bin = " << boolalpha << bin << endl;

    // Extract the rest using the streambuf overload
    i_stm3 >> cout.rdbuf();
    cout << endl;

    cout << " ======================= " << endl;

    return 0;
}
