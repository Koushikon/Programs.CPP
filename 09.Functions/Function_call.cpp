#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int func1(int &a, int &b);
void func2(int &a, int &b, int &c);

int func1(int &a, int &b)
{
    int result{a + b};
    func2(result, a, b);
    return result;
}

void func2(int &a, int &b, int &c)
{
    a += b + c;
}

int main()
{
    int num1{14}, num2{16};

    cout << func1(num1, num2) << endl;
    return 0;
}