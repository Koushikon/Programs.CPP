#include <iostream>
using namespace std;

int add_two(int &first, int &second){
    return first + second;
}

int main()
{
    int a{}, b{};
    cin >> a >> b;

    cout << add_two(a, b);
    return 0;
}