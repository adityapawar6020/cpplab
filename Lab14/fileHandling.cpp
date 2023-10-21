#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string.h>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
 
using namespace std;
 
 class Employee{
	char name[1050];
	public:
		Employee(){
			
		}
		Employee(char name[]){
			strcpy(this->name,name);
		}
};
int main()
{
	
	fstream file1;
	file1.open("linux_command.txt",ios::app);
	Employee *emp;	
	emp = new Employee("Aditya");

	if(file1== NULL)
	{
		cout<<"File not found";
	}
	else{	
		cout<<"Successfully file created";
		file1.write((char*)emp,sizeof(emp));
		file1.close();
		
		file1.open("linux_command.txt",ios::app);
		file1.read((char*)emp,sizeof(emp));
		file1.close();
	}
	

}
