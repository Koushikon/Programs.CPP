#include <iostream>
using namespace std;

int main()
{
    int num{};
    const int lower{10}, upper{20};

    cout << boolalpha;
    // Example - 1
    cout << "Enter an integer the Within bounds are " << lower << " to " << upper << " : ";
    cin >> num;
    bool within_bounds{false};
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

    // Example - 2
    cout << "Enter an integer the Outside bounds are " << lower << " to " << upper << " : ";
    cin >> num;
    bool outside_bounds{false};
    outside_bounds = (num < lower || num > upper);
    cout << num << " is between " << lower << " and " << upper << " : " << outside_bounds << endl;

    // Example - 3
    cout << "Enter an integer on bounds are " << lower << " or " << upper << " : ";
    cin >> num;
    bool on_bounds{false};
    on_bounds = (num == lower || num == upper);
    cout << num << " is between " << lower << " and " << upper << " : " << on_bounds << endl;

    return 0;
}