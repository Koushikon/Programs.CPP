#include <string>
using namespace std;

class Dog
{
private:
    string name;
    int age;

public:
    string get_name() { return name; }
    void set_name(string n) { name = n; }
    int get_age() { return age; }
    void set_age(int a) { age = a; }
    //---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----
    int get_human_years()
    {
        return age * 7;
    }

    string speak()
    {
        return "Woof";
    }
    //---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};

int main()
{
    Dog dog;
    return 0;
}