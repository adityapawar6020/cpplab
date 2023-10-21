#include <iostream>
using namespace std;

class A
{ 
public:
	A()
	{
		cout<<" constructor of A called";
		cout<<endl;
	}
	
	~A()
	{
		cout <<" destructor of A called";
		cout<<endl;
	}
};
class B:public A

{
	public:
	B()
	{
			cout<<" constructor of B called";
			cout<<endl;
	}
	
	~B()
	{
	
		cout<<"destructor of B called";
		cout<<endl;
    }  
};


class C: public B
	
	{
		public:
				C()
	{
			cout<<" constructor of C called";
			cout<<endl;
	}
	          ~C()
	{
			cout<<" destructor of C called";
			cout<<endl;
	}
	
			
	};


int main()
{
	C cobj;
	return 0;
}
