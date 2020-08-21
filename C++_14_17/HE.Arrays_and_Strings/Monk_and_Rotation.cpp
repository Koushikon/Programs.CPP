#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int no_of_cases{};
    cin >> no_of_cases;

    while(no_of_cases--) {
        int no_of_elements{}, no_of_rotation{}, p{};
        cin >> no_of_elements >> no_of_rotation;

        if (no_of_rotation < no_of_elements)
        {
            // long arr_elements[no_of_elements];   // with array
            vector<long> arr_elements(no_of_elements);
            for (int i = 0; i < no_of_elements; i++)
            {
                // cin >> arr_elements[i];
                cin >> arr_elements.at(i);
            }

            no_of_rotation = no_of_elements - no_of_rotation;
            for (int i = no_of_rotation; i < no_of_elements; i++)
            {
                // cout << arr_elements[i] << " ";
                cout << arr_elements.at(i) << " ";
            }
            for (int i = 0; i < no_of_rotation; i++)
            {
                // cout << arr_elements[i] << " ";
                cout << arr_elements.at(i) << " ";
            }
        }
        else
        {
            cout << "This can't be happening";
        }
        cout << endl;
    }

    return 0;
}