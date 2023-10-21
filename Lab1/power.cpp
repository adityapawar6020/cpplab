#include <iostream>
using namespace std;
int main()
{
	int  i, pow,num1,result;
cout<<"enter a number:";
cin>>num1;
cout<<"enter power:";
cin>>pow;
for(i=1;i<=pow;i++)
{
	result=result*num1;
}
cout<<"power of given number is:"<<result;
return 0;
}
