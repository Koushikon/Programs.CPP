#include <iostream>
using namespace std;

void large(int &a, int &b);

int main() {
    int a = 5, b = 7;
    large(a, b);
    cout << "A= " << a << " B= " << b;
}

void large(int &a, int &b) {
    if (a > b)
        a = -1;
    else
        b = -1;
}
