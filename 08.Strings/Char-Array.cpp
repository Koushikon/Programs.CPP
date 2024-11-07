#include <iostream>

using namespace std;

int main()
{
    // Declare char array
    char name[5];

    char arr_3[100];

    /*
     This stops when found found space and
     Take only the spaces before value.
    */
    cin >> arr_3;

    /***
     * With getline with can take the whole input until the delimeter hit
     * Default delimeter is "\n" i.e. new line character
     * In our case we set the delimeter character "$".
     */
    cin.getline(arr_3, 100, '$');

    cout << arr_3[0];

    return 0;
}