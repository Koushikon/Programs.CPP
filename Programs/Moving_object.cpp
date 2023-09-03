#include <iostream>
using namespace std;

int main()
{
    int arr[10]{};
    for (;;)
    {
        for (auto val : arr)
            cout << "  ";
        cout << " ⫸ ";
    }
    return 0;
}