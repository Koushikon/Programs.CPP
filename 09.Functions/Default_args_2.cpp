#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
void greetings(string name, string prefix = "Mr.", string suffix = "");

int main()
{
    double cost{};

    cost = calc_cost(100.0, 0.08, 4.25);

    cout << std::fixed << std::setprecision(2);

    cout << cost << " No Default Arguments." << endl;

    cost = calc_cost(100.0, 0.08);
    cout << cost << " With One Default Argument." << endl;

    cost = calc_cost(200.0);
    cout << cost << " With Two default Arguments." << endl;

    greetings("Glenn", "Dr.", "M.D.");
    greetings("Niggan", "Professor", "P.H.D.");
    greetings("Morgan", "Dr.");
    greetings("Rick");
    greetings("Magi", "Mrs.", "P.H.D.");

    return 0;
}

double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greetings(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}