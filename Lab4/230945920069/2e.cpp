#include <iostream>
using namespace std;

class A
{ int rollno;
public:
	A()
	{
		cout<<" Roll no  of A is not passed";
		cout<<endl;
	}
	
	A(int rno)
	
	{   int rollno=rno;
		cout <<" Rollno of A is "<<rollno;
		cout<<endl;
	}
};
int main()
{
	A obj1;
	A obj2(2);
}

