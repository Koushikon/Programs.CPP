#include <iostream>
using namespace std;

int main()
{
    int age{18};

    if (age > 18)
        cout << "> Now you can participate on election vote." << endl;

    // It runs perfectly but what about the peerson who's age currently 18 according to rules they cal also vote permission.To fix it-

    if (age >= 18)
        cout << ">= Now you can participate on election vote." << endl;

    return 0;
}