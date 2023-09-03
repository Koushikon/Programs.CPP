#include <iostream>
using namespace std;

int main()
{
    int arr[5]{6, 5, 2, 3, 15};
    cout << arr[-1] << endl;

    // wrong logic
    // number is divided by 0,
    // so this program abnormally terminates
    int n{9}, div{};
    div = n / 0;
    cout << div;
    return 0;
}