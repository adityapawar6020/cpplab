#include <iostream>
using namespace std;
class student
{
    int rollno,m1, m2;
	public:
		

	student(int rollno,int m1,int m2)
	{
	this->rollno=rollno;	
	this->m1=m1;
	this->m2=m2;
	}
	int callmark()
	{
		return m1+m2;
	}
	int getRollno()
	{
			return rollno;
	}
};
class sport
{
		int sportmarks;
	public:
		 sport()
		{
		 this->sportmarks=0;
		}
		 sport(int sm)
		{
		 this->sportmarks=sm;
		}
	    int getSM()
		{
			return sportmarks;
		}
	
	
};
class avg:public student,public sport
{
	
	public:
		avg(int rno,int mm1,int mm2,int sm1) :student(rno,mm1,mm2), sport(sm1)
		{
		}
	
	void avgg()
	{
		int total;
		float avg;
		total= student::callmark() + sport::getSM();//This how we can call function as this is multiple inheritance
		avg=(float)total/3;
	    cout<<avg;	
	}	
};

int main()
{
	avg a(1,50,50,50);
	a.avgg();
	
	
}
