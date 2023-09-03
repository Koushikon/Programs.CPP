#include <iostream>
using namespace std;

int main()
{
    int num{56};
    const int min{10}, max{100};

    // cout << "Enter a number between " << min << " and " << max << ": ";
    // cin >> num;

    // These are independent if statement
    // Example - 1
    if (num >= min)
    {
        cout << "===============if Statement 1===============\n"
             << num << " is greater than or equal to " << min << endl;

        int diff{num - min};
        cout << num << " is - " << diff << " grater than " << min << endl;
    }

    // Example - 2
    if (num <= max)
    {
        cout << "===============if Statement 3===============\n"
             << num << " is less than or equal to " << max << endl;

        int diff{max - num};
        cout << num << " is - " << diff << " lesser than " << max << endl;
    }

    // Example - 3
    if (num >= min && num <= max)
    {
        cout << "===============if Statement 3===============\n"
             << num << " is in range \n"
             << num << " This means Statement 1, 2 must also display!" << endl;
    }

    // Example - 4
    if (num == min || num == max)
    {
        cout << "===============if Statement 4===============\n"
             << num << " is right on a boundary \n"
             << num << " This means all 4 Statements display!" << endl;
    }

    // if-else statement example
    const int speed{30};
    if (speed < 40)
    {
        cout << "===============if Statement 5===============\n"
             << speed << " its too slow." << endl;
    }
    else
    {
        cout << "===============if Statement 5===============\n"
             << speed << " its Normal Speed." << endl;
    }

    /**
     * * If with Initializer
     * ? This variable remains on whole if scope
     * ? i.e. In the if, else and else if block
     */
    // Instead of declaring outside of if block this way is much cleaner
    if (const int speed{30}; speed < 40)
    {
        cout << "===============if Statement 6===============\n"
             << speed << " its too slow." << endl;
    }
    else
    {
        cout << "===============if Statement 6===============\n"
             << speed << " its Normal Speed." << endl;
    }

    /**
     * * If with Initializer
     * ! on else if block
     */
    if (const int speed{50}; speed < 40)
    {
        cout << "===============if Statement 7===============\n"
             << speed << " its too slow." << endl;
    }
    else if (speed < 60)
    {
        cout << "===============if Statement 7===============\n"
             << speed << " its Normal Speed." << endl;
    }
    else
    {
        cout << "===============if Statement 7===============\n"
             << speed << " its High Speed. Slow down." << endl;
    }

    return 0;
}