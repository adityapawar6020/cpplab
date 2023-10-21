#include <iostream>
using namespace std;
class employee
{

	int id;
	public:
		employee();
		employee(int);
		void display();
	/* case 1 and case 2	int findsalary()
		{
			return 0;
		}
		*/
	virtual	int findsalary()=0;
		
};

employee::employee()
{
	cout <<"in default of emp"<<endl;
	id=0;	
}
employee::employee(int i)
{
	cout<<"para of emp"<<endl;
	id=i;
}
void employee::display()
{
	cout<<"id of an emp is"<<id<<endl;
}

class wageemployee:public employee
{

	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
	int findsalary();
 
};

wageemployee::wageemployee()
{
	hrs=0;
	rate=0;
}
 wageemployee::wageemployee(int i,int h,int r):employee(i)
{
	cout <<"in para of wage \n"<<endl;
	hrs=h;
	rate=r;
	
}
int wageemployee::findsalary()
{
	return hrs*rate;
}
void wageemployee::display()
{
	employee::display();
	cout<<hrs<<endl;
	cout<<rate<<endl;

}
class salesmanager:public wageemployee
{
	int sales,comm;
	public :
		salesmanager();
		salesmanager(int,int,int,int,int);
	     void display();
	     int findsalary();
};
salesmanager::salesmanager()
{
	
	cout<<"in default of sales";
	sales=comm=0;
}
       salesmanager:: salesmanager(int i,int h,int r,int s,int c):wageemployee( i, h, r)
	   {
	   	cout<<"in para of sales";
		  sales=s;
		  comm=c;
	   }	
void salesmanager::display()

{
wageemployee::display();//
cout<<"sales of employee is"<<sales<<endl;
cout<<"comm of employee is"<<comm<<endl;
}
int salesmanager::findsalary()
{
return( wageemployee::findsalary())+sales*comm;
	
}	
	
	int main()
	{
//		case1
//		employee *ptr;
//		employee e1;
//		ptr = &e1;
//		cout<<ptr -> findsalary();
//		
//		wageemployee we1;
//		ptr = &we1;
//		cout<<ptr -> findsalary();
//	
//	
//		
//		
//	case 2
//	     employee *ptr = new employee();
//		cout<<ptr->findsalary();
//			
//
//		
//		ptr = new wageemployee();
//		cout<<ptr -> findsalary();
//
//		
//		case 3
//	
//		employee *ptr;
//		
//		
//		wageemployee we1(5,5,5);
//		ptr = &we1;
//		cout<<ptr -> findsalary();
//		
//case 4
	 employee *ptr= new wageemployee(5,5,5);
	
		
	
	
	 cout<<ptr -> findsalary();
	
		
		
		

	}
		
	
