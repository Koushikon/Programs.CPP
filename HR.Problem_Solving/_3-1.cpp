#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    long a[2][3]{};

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cin >> a[i][j];
        }
    }

    int points[2]{0, 0};
    for (int j = 0; j < 3; j++)
    {
        int i{0};
        if (a[i][j] == a[i + 1][j])
        {
        }
        else if (a[i][j] > a[i + 1][j])

            points[i] = points[i] + 1;
        else

            points[i + 1] = points[i + 1] + 1;
    }
    cout << points[0] << "\t" << points[1] << endl;
    return 0;
}
