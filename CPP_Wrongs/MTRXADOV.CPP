//Matrix Addition Using overlodind (+) Operator//

#include <iostream>

using namespace std;

class matrix
{
	int a[10][10], r, c;

public:
	matrix()
	{
	}
	matrix(int x, int y)
	{
		r = x;
		c = y;
	}
	matrix(matrix &x);
	matrix operator+(matrix z);
	void input();
	void output();
};

matrix::matrix(matrix &x)
{
	r = x.r;
	c = x.c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = x.a[i][j];
		}
	}
}

void matrix::input()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "\nEnter The Value for A [" << i << "][" << j << "]";
			cin >> a[i][j];
		}
	}
}

void matrix::output()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << " " << a[i][j];
		cout << "\n";
	}
}

matrix matrix::operator+(matrix z)
{
	matrix y;
	y.r = z.r;
	y.c = z.c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			y.a[i][j] = a[i][j] + z.a[i][j];
	}
	return (y);
}

int main()
{
	matrix m1(3, 3), m2(3, 3), m3;
	m1.input();
	m2.input();
	m3 = m1 + m2;
	m3.output();
	return 0;
}