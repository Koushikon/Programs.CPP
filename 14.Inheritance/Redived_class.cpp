#include <iostream>
#include <iomanip>
#include <string>

/**
 * @name Inheritance
 * @details After inheriting the Base class (Account) now our derived class (Savings_account) has the properties of the inherited class (Account).
 */

/**
 * @brief Set breakpoints on account object
 * @brief Set breakpoints on sav_account object
 * @details Now see variables results inside Debugger, That our sav_account object have the variables of Account class.
 * 
 */

using std::cout;
using std::endl;
using std::string;

void display_pattern();

class Account
{
public:
    double balance;
    string name;

    Account();
    ~Account();

    // Functions
    void deposit(double amount);
    void withdraw(double amount);
};

Account::Account() : balance{0.0}, name{"An Account"} {}

Account::~Account() {}

void Account::deposit(double amount)
{
    cout << "Account deposit called " << amount << endl;
}

void Account::withdraw(double amount)
{
    cout << "Account withdraw called " << amount << endl;
}

class Savings_Account : public Account
{
public:
    double intr_rate;
    Savings_Account();
    ~Savings_Account();

    // Function overriding
    void deposit(double amount);
    void withdraw(double amount);
};

Savings_Account::Savings_Account() : intr_rate{} {}

Savings_Account::~Savings_Account() {}

void Savings_Account::deposit(double amount)
{
    /**
     * @brief Accessing the inherited class function
     * @details Calling Account class deposit function yes We can do that by inheritance
     * 
     */
    // Account::deposit(amount);
    cout << "Savings Account deposit called " << amount << endl;
}

void Savings_Account::withdraw(double amount)
{
    /**
     * @brief Accessing the inherited class function
     * @details Calling Account class withdraw function yes We can do that by inheritance
     * 
     */
    // Account::withdraw(amount);
    cout << "Savings Account withdraw called " << amount << endl;
}

void display_pattern()
{
    cout << std::setfill('-') << std::setw(20) << "+\n"
         << endl;
}

int main()
{
    display_pattern();

    // Account class objects
    Account account{}; // Breakpoint
    account.deposit(1200.0);
    account.withdraw(490.25);

    display_pattern();

    Account *p_account = new Account();
    p_account->deposit(920.0);
    p_account->withdraw(450.0);
    delete p_account;

    display_pattern();

    // Savings Account class Objects
    Savings_Account sav_account{}; // Breakpoint
    sav_account.deposit(1200.0);
    sav_account.withdraw(555.0);

    display_pattern();

    Savings_Account *p_sav_account = new Savings_Account();
    p_sav_account->deposit(1532.0);
    p_sav_account->withdraw(450.0);
    delete p_sav_account;

    display_pattern();

    return 0;
}