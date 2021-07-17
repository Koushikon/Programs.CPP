#include <iostream>
using namespace std;

int main()
{
    // Example -1
    // for (;;)
    //     cout << "count" << endl;

    // Example -2
    // int i{1};
    // while (true)
    //     cout << "Count - " << (i += 1) << endl;

    // Example -3
    while (true)
    {
        char again{};
        cout << "Do you want to loop again (Y/N): ";
        cin >> again;
        if (again == 'N' || again == 'n')
            break;
    }

    return 0;
}