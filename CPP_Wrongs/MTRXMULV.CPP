//Matrix Multiplication Using Operator Overloading //

#include <iostream>

using namespace std;

class matrix
{
	int a[10][10], r, c;

public:
	matrix()
	{
	}
	matrix(int, int);
	matrix(matrix &x);
	matrix operator*(matrix z);
	void input();
	void output();
	~matrix()
	{
	}
};
matrix::matrix(int x, int y)
{
	r = x;
	c = y;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = 0;
		}
	}
}
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
			cout << "\nEnter The Value for Matrix [" << i + 1 << "][" << j + 1 << "] :";
			cin >> a[i][j];
		}
	}
}
void matrix::output()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << "  " << a[i][j];
		cout << "\n";
	}
}
matrix matrix::operator*(matrix z)
{
	matrix y;
	y.r = z.r;
	y.c = z.c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			for (int k = 0; k < z.c; k++)
				y.a[i][k] = y.a[i][k] + a[i][j] * z.a[j][k];
		}
	}
	return (y);
}
int main()
{
	matrix m1(3, 3), m2(3, 3), m3(3, 3);
	m1.input();
	m2.input();
	m3 = m1 * m2;
	m3.output();

	return 0;
}