// Copy Constructor with Shallow Copy

#include <iostream>

using std::cout;
using std::endl;

class Shallow
{
private:
    int *data;

public:
    void set_value(int d);
    int get_value();
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

void Shallow::set_value(int d)
{
    *data = d;
}

int Shallow::get_value()
{
    return *data;
}

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data{source.data}
{
    cout << "Copy Constructor Call" << endl;
}

Shallow::~Shallow()
{
    delete data;
    cout << "Destructor Call" << endl;
}

void display(Shallow s)
{
    cout << s.get_value() << endl;
}

int main()
{
    Shallow obj1{100};
    display(obj1);
    // Obj1 has been released in function
    obj1.set_value(1000);
    Shallow obj2{obj1};
    cout << "All Done!" << endl;

    return 0;
}