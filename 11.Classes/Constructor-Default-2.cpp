#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Account
{
private:
    string name;
    double balance;

public:
    /* ERROR
    If we didn't provide the default constructor
    And didn't provide any arguments when creating objects we'll get an compiler error saying "no matching function for call to" */
    // Account() {}

    Account(string name, double bal) // Default or No-args Contructor
    {
        name = name;
        balance = bal;
    }

    ~Account()
    {
        cout << "Account Destructortructor called. " << name << endl;
    }
};

int main()
{
    // Player and Account class access
    {
        Account john_ac;
    }
    cout << endl;

    Account *bobiee = new Account;

    delete bobiee; // Releasing the bobiee

    return 0;
}