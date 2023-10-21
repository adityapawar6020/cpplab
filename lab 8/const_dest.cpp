#include <iostream>
using namespace std;
#include<string.h>

class student{
	
	public:
		student();
	    ~student();
		
		
};
student::student()
{
	cout<<"cons called"<<endl;
}
student::~student()
{
	cout<<"des called";
}


int main()
{
	student s;
}


