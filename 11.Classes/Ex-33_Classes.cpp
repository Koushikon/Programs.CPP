#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
    string name;
    int age;

public:
    Dog(string name, int age) : name{name}, age{age} {}

    //---- WRITE YOUR COPY CONSTRUCTOR BELOW THIS LINE
    Dog(const Dog &obj)
    {
        name = obj.name;
        age = obj.age;
        std::cout << "Copy Constructor";
    }
    ~Dog() {}
    //---- WRITE YOUR COPY CONSTRUCTOR ABOVE THIS LINE
    string get_name() { return name; }
    void set_name(string n) { name = n; }
    int get_age() { return age; }
    void set_age(int a) { age = a; }
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof"; }
};

int main()
{
    Dog spot{"Sport", 5};
    Dog twin{spot};
    return 0;
}