/*
    Frank's carpet cleaning service
    charges $25 per small room
    charges $35 per large room
    Sales tax rate is 6 %
    estimates are valid+ for 30 days

    Promt the user for the no. of small room they would like to cleaned :
    Promt the user for the no. of large room they would like to cleaned :
    ----Provide the estiate such as:

        Estimate for carpet cleaning service:
        No. of small room - 3
        No. of small room - 1
        Price per small room - $25
        Price per large room - $35
        Cost - $110
        Tax - $6.6
        Total estimate - $116.6
        ---This estimate valid for 30 days---

    Pseudo Code:
    i.  Promt the user to enter the no. of small rooms
        Promt the user to enter the no. of small rooms
    ii. Display no. of small room:
        Display no. of large room:
    iii.Display price per small room:
        Display price per large room:
    iv.Display cost: 
    v.Display tax: 
    vi.Total estimate: 
*/

#include <iostream>

using namespace std;

int main(){
    cout << "Hello, Welcome to the franks carpet cleaning service" << endl;

    //estimate_expiry = 32;   //Compiler error

    cout << "How many small rooms would you like to cleaned? ";
    int no_of_small_rooms{0};
    cin >> no_of_small_rooms;
    cout << "How many small rooms would you like to cleaned? ";
    int no_of_large_rooms{0};
    cin >> no_of_large_rooms;

    // Declared constants
    //Now after this type of variable declaration we can't change the value
    const double price_of_small_room{25};
    const double price_of_large_room{35};

    const double sales_tax{0.06};
    const int estimate_expiry{30};

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "\tNo. of small rooms: " << no_of_small_rooms << endl;
    cout << "\tNo. of large rooms: " << no_of_large_rooms << endl;
    cout << "\tPrice of small room: $" << price_of_small_room << endl;
    cout << "\tPrice of small room: $" << price_of_large_room << endl;
    const double separate_room_costs {(price_of_small_room * no_of_small_rooms) + (price_of_large_room * no_of_large_rooms)};
    cout << "\tCost: $" << separate_room_costs << endl;
    const double total_tax {separate_room_costs * sales_tax};
    cout << "\tTax: $" << total_tax << endl;

    cout << "------------------------------------" << endl;
    cout << "\tTotal estimate: $" << separate_room_costs + total_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days.." << endl;

    return 0;
}