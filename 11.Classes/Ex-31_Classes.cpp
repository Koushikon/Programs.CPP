#include <string>
using namespace std;

class Dog
{
private:
    string name;
    int age;

public:
    //---- WRITE YOUR NO-ARGS CONSTRUCTOR BELOW THIS LINE----

    Dog() : name{"None"}, age{0} {}

    //---- WRITE YOUR NO_ARGS CONSTRUCTOR ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE

    string get_name() { return name; }
    void set_name(string n) { name = n; }
    int get_age() { return age; }
    void set_age(int a) { age = a; }
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof"; }
};

int main()
{
    Dog dog;
    return 0;
}