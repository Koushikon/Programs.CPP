#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double bill_total{102.78};
    int number_of_guests{5};

    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----

    double individual_bill{bill_total / number_of_guests};

    int individual_bill_1{static_cast<int>(floor(individual_bill))};
    int individual_bill_2{static_cast<int>(round(individual_bill))};
    double individual_bill_3{ceil(individual_bill * 100) / 100};

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n"
         << "The individual bill at location 2 will be $" << individual_bill_2 << "\n"
         << "The individual bill at location 3 will be $" << individual_bill_3;
}