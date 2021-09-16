// Primitive Types

#include <iostream>

using namespace std;

int main()
{
    /*************
     * character type
    *************/
    char last_initial{'S'}; //  Single quotes around the character
    cout << "My last name initial is: " << last_initial << endl;

    /*************
     * floating-point type
    *************/
    float car_payment {401.23};
    cout<<"My car payment: "<<car_payment<<endl;

    double pi {3.14159};
    cout<<"The pi is: "<<pi<<endl;

    long double large_amount {2.7e120};
    cout<<large_amount<<" is a very big number"<<endl;


    /*************
     * boolean type
    *************/
    bool game_over {false};
    cout<<"Your game result was "<<game_over<<endl;

    return 0;
}