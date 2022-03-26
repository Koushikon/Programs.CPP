#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i{}, bound{1000000};

    /**
     * * The Reason we're doing it bcause to see
     * * How a output statement could effect our loop performance
     * ? The First loop ended in no time at all
     * ? But the Second loop takes too much time because of an output statement.
     */

    while (i < bound)
        i++;
    cout << "End of the first loop" << endl;

    i = 0;
    while (i < bound)
    {
        cout << i << ' ';
        i++;
    }
    cout << "\nEnd of the Second loop" << endl;

    return 0;
}