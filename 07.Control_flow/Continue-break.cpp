#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values{1, 2, -1, 3, -1, -99, 7, 8, 10};
    for (auto val : values)
    {
        if (val == -99)
            break;
        else if (val == -1)
            continue;
        else
            cout << val << endl;
    }

    int val{7};
    do
    {
        if (val == -99)
            break;
        else if (val == -1)
            continue;
        else
            cout << val << endl;
        val++;
    } while (val < 20);

    return 0;
}