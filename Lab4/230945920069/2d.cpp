#include <iostream>
using namespace std;

class A

{ 
int rollno=0;
public:
	A(int rollno)
	{
		cout <<" Rollno of A is "<<rollno;
		cout<<endl;
	}
	
	A( A &obj3)

	{
		cout<<" Rollno of 2nd object of A is ";
		cout<<obj3.rollno;
	
	}
	
	 
	

};

int main()
{
	A obj1(5);
	A obj2(obj1);
//	A obj3;
	
}
