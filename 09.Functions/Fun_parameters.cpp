#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void paramater_test(int formal);

int main()
{
    int actual{70};

    cout << "Actual: " << actual << endl;
    paramater_test(actual);
    cout << "After Parameter Test in main: " << actual << endl;
    return 0;
}

void paramater_test(int formal)
{
    cout << "IN Parameter Test: " << formal << endl;
    formal = 100;
    cout << "After Re-Initialize in Parameter Test Function. " << formal << endl;
}