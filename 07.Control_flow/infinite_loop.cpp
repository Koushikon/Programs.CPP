#include <iostream>
using namespace std;

int main()
{
    /**
     * * Infinite For loop
     */
    // for (;;)
    // {
    //     cout << "count" << endl;
    // }

    /**
     * * Infinite While loop
     */
    // int i{1};
    // while (true)
    // {
    //     cout << "Count - " << (i += 1) << endl;
    // }

    /**
     * * Infinite Do-while loop
     */
    // int i{1};
    // do
    // {
    //     cout << "Count - " << (i += 1) << endl;
    // } while (true);

    /**
     * * Infinite While loop with Exit Strategy N or n
     */
    while (true)
    {
        char again{};
        cout << "Do you want to loop again (Y/N): ";
        cin >> again;

        if (again == 'N' || again == 'n')
            break;
    }

    /**
     * * Infinite loop with different strategy
     */

    bool end{false};
    char go_on{};

    while (end == false)
    {
        cout << "Continue (Y | N): ";
        cin >> go_on;

        end = (go_on == 'Y') || (go_on == 'y') ? false : true;
    }
    return 0;
}