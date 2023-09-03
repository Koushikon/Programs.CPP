// Variable Sized Arrays

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::pow;

const int size_of_array = pow(10, 5);

int main()
{
    int arrays{}, queries{};
    cin >> arrays >> queries;

    int **realm = new int *[arrays];
    int el_size[arrays]{};

    if ((arrays >= 1 && arrays <= size_of_array) && (queries >= 1 && queries <= size_of_array))
    {
        for (size_t i{}; i < arrays; ++i)
        {
            cin >> el_size[i];

            int *realm2d = new int[el_size[i]];

            if (el_size[i] >= 1 && el_size[i] <= (3 * size_of_array))
                for (size_t j{}; j < el_size[i]; ++j)
                    cin >> realm2d[j];
            *(realm + i) = realm2d;
        }

        for (size_t i{}; i < queries; ++i)
        {
            int row{}, find{};
            cin >> row >> find;

            if (find >= 0 && find < el_size[row])
                cout << realm[row][find] << endl;
        }
    }

    delete[] realm;

    return 0;
}