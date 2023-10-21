#include <iostream>
using namespace std;
int main()
{   int num;
    int cnt;
    int result;
	cout<<"enter a number";
	cin>>num;
	while(num!=0)
	{
		num=num/10;
	    cnt=cnt+1;
	}
	cout<<"total no of digits in given no is ";
	cout<<cnt;
	
}
