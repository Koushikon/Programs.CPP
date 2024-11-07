// Copy Constructor with Deep Copy
#include <iostream>

using std::cout;
using std::endl;

class Deep
{
private:
    int *data;

public:
    void set_value(int d);
    int get_value();
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

void Deep::set_value(int d)
{
    *data = d;
}

int Deep::get_value()
{
    return *data;
}

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

// "1st" implementation of Deep Copying Copy constructor
Deep::Deep(const Deep &source)
{
    data = new int;
    *data = *source.data;
    cout << "Copy Constructor Call" << endl;
}

// "2nd" implementation of Deep Copying Copy constructor
/*
Deep::Deep(const Deep &source)
    : Deep{*source.data}
{
    cout << "Copy Constructor Call" << endl;
}*/

Deep::~Deep()
{
    delete data;
    cout << "Destructor Call" << endl;
}

void display(Deep s)
{
    cout << s.get_value() << endl;
}

int main()
{
    Deep obj1{100};
    display(obj1);
    // Obj1 has been released in function
    obj1.set_value(1000);
    Deep obj2{obj1};
    cout << "All Done!" << endl;

    return 0;
}