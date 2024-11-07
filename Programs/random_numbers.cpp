#include <iostream>

using namespace std;

int main()
{
    // Same sequence each time program runs
    int random_num = rand(); // generates a number between 0 to RAND_MAX
    cout << "Random number : " << random_num << endl;

    random_num = rand();
    cout << "Random number : " << random_num << endl;

    random_num = rand() % 6; // For Dice Range [0 - 6]
    cout << "Random number : " << random_num << endl;

    cout << "RAND_MAX : " << RAND_MAX << endl; // 32767

    // Range [0 - 10] with % modulo operator
    random_num = rand() % 11;
    cout << "Random number 1 : " << random_num << endl;

    for (size_t i{}; i < 30; i++)
    {
        random_num = rand() % 11;
        cout << "Random number 1 : " << random_num << endl;
    }

    // Range [1 - 15]
    random_num = (rand() % 15) + 1;
    cout << "Random number 2 : " << random_num << endl;

    for (size_t i{}; i < 30; i++)
    {
        random_num = (rand() % 15) + 1;
        cout << "Random number 2 : " << random_num << endl;
    }

    // Random number seed and Range [1 - 15]
    cout << time(0) << endl; // Since January 1970 at 00:00:00 AM
    srand(time(0));

    random_num = (rand() % 15) + 1;
    cout << "Random number 3 : " << random_num << endl;

    for (size_t i{}; i < 30; i++)
    {
        random_num = (rand() % 15) + 1;
        cout << "Random number 2 : " << random_num << endl;
    }

    return 0;
}