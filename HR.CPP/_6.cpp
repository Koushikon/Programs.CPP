#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int no_of_input{};
    cin >> no_of_input;

    vector<int> arr(no_of_input);
    for (unsigned int i{0}; i < arr.size(); ++i)
        cin >> arr.at(i);

    for (int i{no_of_input - 1}; i >= 0; --i)
        cout << arr.at(i) << " ";

    return 0;
}
