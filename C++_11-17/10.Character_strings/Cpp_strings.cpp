#include <iostream>
#include <string>
using namespace std;

int main()
{
     /*
    // Example -1
    string s1;
    string s2{"Kolkata"};
    string s3{s2};
    string s4{s3, 4};
    string s5("Kolkata now", 3); // {"Kolkata now", 3} the same result.
    string s6{s3, 0, 2};
    string s7(3, 'X');

    cout << "S1 - " << s1 << ", S2 - " << s2 << ", S3 - " << s3 << ", S4 - " << s4 << ", S5 - " << s5 << ", S6 - " << s6 << ", S7 - " << s7 << endl;
    */

     /*
    // Example -2
    string s1;
    s1 = "C++ rocks";
    string s2{"Hello"};
    s2 = s1;
    cout << "S1 - " << s1 << ", S2 - " << s2 << endl;
    */

     /*
    // Example -3
    string part1{"C++"}, part2{"is powerful"}, sentence;
    sentence = part1 + " " + part2 + " language.";
    // sentence = "C++" + " is powerful"; - illegal
    cout << sentence << endl;
    */

     /*
    // Example -4
    string s1, s2{"Khagrabari"};
    cout << "with Array accessor []: " << s2[0]
         << ", with vector accessor at(): " << s2.at(0) << endl;
    */

     /*
     // Example -5
     string s1{"Kolkata"};
     for (size_t i{0}; i < s1.length(); ++i)
          cout << s1.at(i) << endl; // or s1[i]
     */

     /*
     // Example -6
     string s1{"Ball"};
     for (char c : s1)
        cout << c << endl;
     */

     /*
    // Example -7
    string s1{"Kolkata"};
    for (int c : s1)
        cout << c << endl;
    */

     /*
    // Example -8
    string s1{"Apple"}, s2{"Banana"}, s3{"Kiwi"}, s4{"apple"}, s5{s1};
    cout << "s1 == s5: " << (s1 == s5) << endl
         << "s1 == s2: " << (s1 == s2) << endl
         << "s1 != s2: " << (s1 != s2) << endl
         << "s1 < s2 " << (s1 < s2) << endl
         << "s2 < s1: " << (s2 < s1) << endl
         << "s4 < s5: " << (s4 < s5) << endl
         << "s1 == Apple: " << (s1 == "Apple") << endl;
    */

     /*
    // Example -9
    string s1{"This is a exam."};
    cout << s1.substr(0, 4) << endl
         << s1.substr(5, 2) << endl
         << s1.substr(10, 4) << endl;
    */

     /*
    // Example -10
    string s1{"This is a exam."};
    cout << s1.find("This") << endl
         << s1.find("is") << endl
         << s1.find("exam") << endl
         << s1.find("x") << endl
         << s1.find("is", 4) << endl
         << s1.find("xxx") << endl;
    */

     /*
    // Example -11
    string s1{"This is a exam."};
    cout << s1.erase(0, 5) << endl
         << s1.erase(5, 4) << endl;
    s1.clear();
    cout << s1.length() << endl;
    */

     /*
    // Example -12
    string s1{"Kolkata"};
    cout << s1.length() << endl;
    s1 += " Jabo.";
    cout << s1 << " has length " << s1.length() << endl;
    */

     // Example -13 - input with C++ Strings
     string s1;
     cin >> s1;
     cout << "with cin = " << s1 << endl;
     cin.ignore(); // Otherwise we didn't get input stream.
     getline(cin, s1);
     cout << "with getline(cin, a) = " << s1 << endl;
     getline(cin, s1, 'x');
     cout << "with getline(cin, a, x) = " << s1 << endl;

     return 0;
}