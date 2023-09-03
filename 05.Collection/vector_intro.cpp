#include<iostream>
#include<vector>
using namespace  std;

int main() {
    // vector <char> vowels;    //  empty, no size declaration
    // vector <char> vowels (5);    //  5 elements initialized to zero
    vector <char> vowels {'a','e','i','o','u'};

    cout<<vowels[0]<<endl
        <<vowels[4]<<endl;  //  never do bounds checking cause of "[]" subscribe operator.

    // vector <int> test_case (3);     //   3 elements all initialized to 0.
    // vector <int> test_case (3, 100);     //  3 elements all initialized to 100.
    vector <int> test_case {100, 98, 52};
    cout<<test_case.at(0)<<endl 
        <<test_case.at(1)<<endl
        <<test_case.at(2)<<endl
        <<"The Size of "<<test_case.size()<<endl;   //  Using vector syntax
    
    cout<<"\nEnter 3 test cases: ";
    cin>>test_case.at(0)>>test_case.at(1)>>test_case.at(2);

    cout<<test_case.at(0)<<endl 
        <<test_case.at(1)<<endl
        <<test_case.at(2)<<endl
        <<"The Size of "<<test_case.size()<<endl;
    
    test_case.push_back(45);
    cout<<"Updated Test case values: "<<endl
        <<test_case.at(0)<<endl 
        <<test_case.at(1)<<endl
        <<test_case.at(2)<<endl
        <<test_case.at(3)<<endl
        <<"The Size of "<<test_case.size()<<endl;

    return 0;
}