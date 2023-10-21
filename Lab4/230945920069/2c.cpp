#include <iostream>
using namespace std;

class Student
{ 
 int rollno;
 int age;
 char name;
public:
	Student(char name,int rollno,int age)
	{
		cout<<"  parameterized constructor of Student called";
		cout<<endl;
		cout<<"name of student is "<<name;
		cout<<endl;
		cout<<"roll no of student is "<<rollno;
		cout<<endl;
		cout<<"age of student is "<<age;
	
		
	}
	
	
};
int main()
{
	Student obj( 'a',20,18);
	return 0;
}
