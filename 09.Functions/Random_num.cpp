#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int random_number{}, min{1}, max{6};
    cout << "The RAND MAX is :" << RAND_MAX << endl;

    srand(time(nullptr));

    for (size_t i{1}; i != 10; ++i)
    {
        cout << "\t" << rand() % max + min;
    }
}