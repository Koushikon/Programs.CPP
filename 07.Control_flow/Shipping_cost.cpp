/*
Shipping Cost Calculator with US Dollar

-Ask the user for Package dimension in inches
-length, height, width - This should be integers
-All package must be 10 inches or less otherwise we can't ship it.

-Base Cost 2.50
-if package volume is greater than 100 cubic inches, There is a 10% Surcharge
-if package volume is greater than 500 cubic inches, There is a 25% Surcharge
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int length{}, height{}, width{}, max_dimension_length{10}, package_volume{};
    double base_cost{2.50}, tier1_surcharge{0.10}, tier2_surcharge{0.25};
    const int tier1_threshold{100}, tier2_threshold{500};

    cout << "Welcome to the package volume calculator" << endl
         << "Enter the length, height and width separated by space: ";
    cin >> length >> height >> width;

    if (length > max_dimension_length || height > max_dimension_length || width > max_dimension_length)
    {
        cout << "Sorry, package damaged - dimension exceeded" << endl;
    }
    else
    {
        double package_cost{};
        package_volume = length * height * width;
        package_cost = base_cost;

        if (package_volume > tier2_threshold)
        {
            package_cost += package_cost * tier2_surcharge;
            cout << "Adding tier2 surcharge" << endl;
        }
        else if (package_volume > tier1_threshold)
        {
            package_cost += package_cost * tier1_surcharge;
            cout << "Adding tier1 surcharge" << endl;
        }
        cout << fixed << setprecision(2);
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship." << endl;
    }

    return 0;
}