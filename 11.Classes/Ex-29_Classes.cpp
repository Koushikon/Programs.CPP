#include <string>
using namespace std;

class Dog
{
private:
    string name;
    int age;

public:
    void set_name(string param_name)
    {
        name = param_name;
    }
    void set_age(int param_age)
    {
        age = param_age;
    }

    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
};

int main()
{
    Dog dog;
    return 0;
}
