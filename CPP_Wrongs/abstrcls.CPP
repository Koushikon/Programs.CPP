#include <iostream>

using namespace std;

class base
{
public:
	virtual void display() = 0;
};

class derived : public base
{
public:
	void display()
	{
		cout << "\nI am in Derived Class";
	}
};

int main()
{
	base obj;
	base *b;
	derived d;
	b = &d;
	b->display();
}
