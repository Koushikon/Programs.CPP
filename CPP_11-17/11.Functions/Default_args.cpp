#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);

/*
void f(int a, int b = 2, int c = 3); // trailing defaults
void g(int a = 1, int b = 2, int c); // error, leading defaults
void h(int a, int b = 3, int c);     // error, default in middle

void f(int a, int b, int c = 1);         // valid
void f(int a, int b = 1, int c);         // valid, add another default
void f(int a = 1, int b, int c);         // valid, add another default
void f(int a = 1, int b = 1, int c = 1); // error, redefined defaults
*/

int main()
{
    double cost{};
    cost = calc_cost(200.1);
    cout << cost << " With Default Argument-2 & 3." << endl;

    cost = calc_cost(200.1, 0.08);
    cout << cost << " With Default Argument-3." << endl;

    // Below, function call not gonna work, we can't skip arguments.
    // Solve: Switch tge position of Parameter and then call.
    // cost = calc_cost(200.1, , 4.0);

    cost = calc_cost(200.1, 0.08, 5.0);
    cout << cost << " With exlpicit Arguments." << endl;

    return 0;
}

double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}