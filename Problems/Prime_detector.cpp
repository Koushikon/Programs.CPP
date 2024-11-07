#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number{}, result;
    bool is_prime{true};

    cout << "\nEnter a number to check if it is Prime or not? - ";
    cin >> number;

    if (number == 0 || number == 1)
        is_prime = false;
    else
    {

        for (int i{2}; i <= number / 2; ++i)
        {
            if (number % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }

    cout << ((is_prime) ? "\tIt's a Prime number" : "\tIt's a Composite number") << endl;

    return 0;
}