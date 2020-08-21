#include <iostream>
using namespace std;

int main()
{
    const double rup_per_usd{74.8780};

    cout << "- : Welcome to US Dollar to Indian Rupee Converter : - " << endl;

    cout << "\n\tEnter value in Dollar $";
    double dollar, rupee;
    dollar = rupee = 0.0;
    cin >> dollar;

    rupee = dollar * rup_per_usd;
    cout << "\t$" << dollar << " equivalent to ₹" << rupee << endl;

    return 0;
}