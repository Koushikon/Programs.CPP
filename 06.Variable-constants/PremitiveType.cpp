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
     * integer type
    *************/
    unsigned short int exam_score {55};  //  Same as unsigned short exam_score {55}
    cout<<"My exam score was: "<<exam_score<<endl;

    int country_represented {65};
    cout<<"There were "<<country_represented<<" countries represented in my meeting"<<endl;

    long people_in_cooch_behar {25100000};
    cout<<"There are about "<<people_in_cooch_behar<<" people in Cooch Behar"<<endl;

    /* Working with long long not working properly

    //   Overloading result with regular initialization syntax
    long people_on_earth = 7'610'100'000'000'000'100'111'111;
    cout<<"There are about "<<people_on_earth<<" people on Earth"<<endl;

    long long people_on_earth {7'610'100'000'000'000'100'111'111};
    cout<<"There are about "<<people_on_earth<<" people on Earth"<<endl;

    */


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


    /*************
     * Overloading error example
    *************/
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};
    cout<<"The product of "<<value1<<" and "<<value2<<" is "<<product<<endl;

    return 0;
}