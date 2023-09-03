#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count{0};

double a_penny_doubled_everyday(int n, double penny = 0.01);

int main()
{
    double total_amount{};
    total_amount = a_penny_doubled_everyday(18);
    cout << "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;

    return 0;
}

double a_penny_doubled_everyday(int n, double penny)
{
    function_activation_count++;
    if (n <= 1)
        return penny;
    return a_penny_doubled_everyday(--n, penny * 2);
}

int test_function_activation_count()
{
    return function_activation_count;
}