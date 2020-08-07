#include<iostream>

using namespace std;

int main() {

    char vowels [5] {'a','e','i','o','u'};
    cout<<"The second vowels: "<< vowels[1]<<endl;
    cout<<"The fourth vowels: "<< vowels[4]<<endl;

    // cin>>vowels[5]; //   Runtime error cause array out of bounds

    double hi_temps [] {90.1, 67.3, 33.1, 42.8};
    cout<<"The second temprature: "<< hi_temps[1]<<endl;
    cout<<"The third temprature: "<< hi_temps[2]<<endl;

    hi_temps[1] = 105.2;
    cout<<"The updated second temprature: "<< hi_temps[1]<<endl;

    /*
    int test_case [5]; //   In This array declaration all values will be random.

    int test_case [5] {}; //   In this array declaration for "{}" all values will be initializzed with 0.
    
    int test_case [5] {100}; //   In this array declaration for "{100}" only first value will be initializzed with 100 & others with 0 because of "{}".
    */
    int test_case [5] {100, 80}; // In this array declaration for "{100, 80}" first value will be initializzed with 100, second with 80 & others with 0 because of "{}".

    cout<<"\nThe first Test_case: "<<test_case[0]<<endl
        <<"The first Test_case: "<<test_case[1]<<endl
        <<"The first Test_case: "<<test_case[2]<<endl
        <<"The first Test_case: "<<test_case[3]<<endl
        <<"The first Test_case: "<<test_case[4]<<endl;

    cout<<"\nAll Test_cases input: ";
    cin>>test_case[0]>>test_case[1]>>test_case[2]>>test_case[3]>>test_case[4];

    cout<<"The first Test_case: "<<test_case[0]<<endl
        <<"The first Test_case: "<<test_case[1]<<endl
        <<"The first Test_case: "<<test_case[2]<<endl
        <<"The first Test_case: "<<test_case[3]<<endl
        <<"The first Test_case: "<<test_case[4]<<endl;

    cout<<"\nNotice what if we just type the name: "<<test_case<<endl; //   The test_case value diplaying on the output is the actual memory location of this array.
    
    return 0; 
}