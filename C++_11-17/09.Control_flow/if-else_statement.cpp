
#include <iostream>
using namespace std;

int main()
{
    int num{};
    const int target{10};

    cout << "Enter a number and i will compare it to " << target << ": ";
    cin >> num;

    // if-else & else if statement example
    if (num >= target)
    {
        cout << "=======================================" << endl
             << num << " is greater than or equal to " << target << endl;
        int diff{num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    }
    else
    {
        cout << "=======================================" << endl
             << num << " is less than or equal to " << target << endl;
        int diff{target - num};
        cout << num << " is " << diff << " lesser than " << target << endl;
    }

    return 0;
}