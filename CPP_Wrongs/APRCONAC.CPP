/* Write a C++ program to define a class "Account". Deriived a
"Savings_Acount" class from the Account class. Define appropriate
constructor for both the clases. Also define a method to display the
Account balance. Make necessery assumption, if required. **/

#include <iostream>
#include <string>

using namespace std;

class Account
{
    char name[20], ac_no[20];
    double balance;

public:
    Account(char n[], char ac[], double b)
    {
        strcpy(name, n);
        strcpy(ac_no, ac);
        balance = b;
    }
    void display()
    {
        cout << "\nName= " << name
             << "\nAccount  No= " << ac_no
             << "\nBalance= " << balance;
    }
};

class Savings_Account : public Account
{
public:
    Savings_Account(char n[], char ac[], double b) : Account(n, ac, b)
    {
    }
};

void main()
{
    Savings_Account SA("Santosh", "311004568", 50000);
    SA.display();
}