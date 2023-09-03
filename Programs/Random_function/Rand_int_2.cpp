#include <iostream>
#include <cstdlib> // For rand(), srand()
#include <ctime>   // for time()
#include <array>
#include <iomanip> // For setw()

using std::array;
using std::cout;
using std::rand;
using std::srand;

int main()
{
    srand(static_cast<unsigned>(time(0)));

    array<int, 100> arr{};
    int number{};

    cout << "The array is: \n";

    for (size_t i{1}; i <= arr.size(); ++i)
    {
        number = rand() % 1000 + 1;
        cout << std::setw(5) << number << ((i % 10 == 0) ? "\n" : " ");
    }

    return 0;
}