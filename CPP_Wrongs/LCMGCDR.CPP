#include <iostream>

using namespace std;

class lcmgcd
{
	int a, b;
	long lcm, gcd;

public:
	int input();
	long gcd(int, int);
	int out();
};

int lcmgcd::input()
{
	cout << "\nEnter Value for A: ";
	cin >> a;
	cout << "\nEnter Value for B: ";
	cin >> b;
}

long lcmgcd::gcd(int i, int j)
{
	if (i == j)
		return (j);
	else
	{
		if (i > j)
			gcd = (i - j, j);
		else
			gcd = (i, j - i);
	}
}

int lcmgcd::out()
{
	int GCD = gcd(a, b);
	cout << "LCM= " << (long)a * b / GCD << "GCD= " << GCD<<endl;
}
int main()
{
	lcmgcd g;
	g.input();
	g.out();
	return 0;
}