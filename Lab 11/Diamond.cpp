#include<iostream>
using namespace std;
class a
{
int p;
public:
	a()
	{
		cout<<"in default of a class\n";
	}
	
	
};
class b: virtual public a
{
	int q;
public:
	b()
	{
		cout<<"in default of b class\n";
	}
};
class c: virtual public a
{
	int r;
public:
	c()
	{
		cout<<"in default of c class\n";
	}
};
class d:public b,public c
{
	int s;
public:
	d():a()
	{
		cout<<"in default of d class\n";
	}
};
int main()
{
	d obj;
}



