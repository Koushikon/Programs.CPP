//Multiplication of 2 Complex Number Using Operator Overloading//

class complex
{
int a,b;
public:

complex()
{}

complex(int x,int y)
{
	a=x;
	b=y;
}

complex(complex &x)
{
	a=x.a;
	b=x.b;
}
complex operator*(complex z)
{
	complex p;
	p.a=a*z.a-b*z.b;
	p.b=a*z.b+b*z.a;
	return(p);
}

void print()
{
	cout<<"\nThe Complex Number is: "<<a<<"+"<<b<<"i";
}

~complex()
{}
};

void main()
{
complex x(10,12),y(20,30),z;

clrscr();
z=x*y;
z.print();

getch();
}