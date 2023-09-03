#include <string>
using namespace std;

class Dog
{
private:
    string name;
    int age;

public:
    //---- WRITE YOUR OVERLOADED CONSTRUCTOR BELOW THIS LINE

    Dog(string param_name, int param_age) : name{param_name}, age{param_age} {};

    ~Dog() {}

    //---- WRITE YOUR OVERLOADED CONSTRUCTOR ABOVE THIS LINE
    string get_name() { return name; }
    void set_name(string n) { name = n; }
    int get_age() { return age; }
    void set_age(int a) { age = a; }
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof"; }
};

int main()
{
    Dog fibo{"Fibo", 4};
    Dog spot{"Spot", 5};
    return 0;
}