#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void display_data();
void display_data();

void display_data(const vector<string> *const data)
{
    // (*data).at(0)= "Bunny"; // This couldn't run bacause of const keyword.

    for (auto val : *data)
        cout << val << "\t";
    cout << endl;

    // data = nullptr; // This couldn't run bacause of const keyword.
}

void display_data(const int *data, int sentinal)
{
    while (*data != sentinal)
        cout << *(data++) << "\t";
    cout << endl;
}

int main()
{
    vector<string> names{"Larry", "Moe", "Carly"};
    display_data(&names);

    int scores[]{97, 55, 36, 25, -1};
    display_data(scores, -1);

    return 0;
}