#include <iostream>
using namespace std;
int count=0;

class A
{ 

public:
	A()
	{  
		cout<<" constructor of A called"<<endl;
		count=count+1;
		
	}
	counter()
	{
		cout<<"constructor is called"<<count<<"times"<<endl;
	}
	
	
};
int main()
{
	
	A a1;
	a1.counter();
	A a2;
	a2.counter();
	A a3;
	a3.counter();
	
	
}
