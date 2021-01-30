#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int no_of_items{};
    cout << "How many data items do you have: ";
    cin >> no_of_items;

    vector<int> data{};
    for (unsigned int i{1}; i <= no_of_items; ++i)
    {
        int data_item{};
        cout << "Enter data item- ";
        cin >> data_item;
        data.push_back(data_item);
    }

    // Example- 1
    // for (auto val : data)
    //     cout << val << " ";

    // Example- 2
    for (auto val : data)
    {
        for (unsigned int i{1}; i <= val; ++i)
        {
            if (i % 5 == 0)
                cout << " * ";
            else
                cout << "- ";
        }
        cout << endl;
    }

    return 0;
}