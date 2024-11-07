#include <iostream>

using namespace std;

class factorial
{
    int num{};
    long fact_value{1};

public:
    void input();
    void calculate();
    void output();
};

void factorial::input()
{
    try
    {
        cout << "Enter the number: ";
        cin >> num;

        if (num < 1)
            throw num;
    }
    catch (int num)
    {
        cout << "The provided number should be greater than 0. You entered " << num << endl;
    }
}

void factorial::calculate()
{
    for (size_t i{1}; i <= num; i++)
    {
        fact_value = fact_value * i;
    }
}

void factorial::output()
{
    cout << "Factorital of " << num << " is " << fact_value << endl;
}

int main()
{
    factorial fact;
    fact.input();
    fact.calculate();
    fact.output();

    return 0;
}