#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::swap;

int main()
{
    int num1{17}, num2{506};
    char word1{'G'}, word2{'s'};
    double dbl1{71.2}, dbl2{5.3};

    // Integer type
    cout << "Before: " << num1 << " - " << num2 << endl;
    swap(num1, num2);
    cout << "After: " << num1 << " - " << num2 << endl
         << endl;

    // Charater type
    cout << "Before: " << word1 << " - " << word2 << endl;
    swap(word1, word2);
    cout << "After: " << word1 << " - " << word2 << endl
         << endl;

    // Double type
    cout << "Before: " << dbl1 << " - " << dbl2 << endl;
    swap(dbl1, dbl2);
    cout << "After: " << dbl1 << " - " << dbl2 << endl
         << endl;
}