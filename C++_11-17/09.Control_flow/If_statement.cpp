#include <iostream>
using namespace std;

int main()
{
    int num{};
    const int min{10}, max{100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;
    // These are independent if statement
    // Example - 1
    if (num >= min)
    {
        cout << "===============if Statement 1===============" << endl
             << num << " is greater than or equal to " << min << endl;

        int diff{num - min};
        cout << num << " is - " << diff << " grater than " << min << endl;
    }

    // Example - 2
    if (num <= max)
    {
        cout << "===============if Statement 2===============" << endl
             << num << " is less than or equal to " << max << endl;

        int diff{max - num};
        cout << num << " is - " << diff << " lesser than " << max << endl;
    }

    // Example - 3
    if (num >= min && num <= max)
    {
        cout << "===============if Statement 3===============" << endl
             << num << " is in range " << endl
             << num << " This means Statement 1, 2 must also display!" << endl;
    }

    // Example - 4
    if (num == min || num == max)
    {
        cout << "===============if Statement 4===============" << endl
             << num << " is right on a boundary " << endl
             << num << " This means all 4 Statements display!" << endl;
    }

    return 0;
}