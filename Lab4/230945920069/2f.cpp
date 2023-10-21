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
	
	
};
int main()
{
	A obj[10];
	cout<<"as we have made array of 10 objects the constructor is getting called 10 times for each object";
}
