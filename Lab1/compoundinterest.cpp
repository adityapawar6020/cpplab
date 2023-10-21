#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	float p,r,t;
	float CI;
	cout<<"enter initial amount";
	cin>>p;
	cout<<"enter interest rate";
	cin>>r;
	cout<<"enter time span";
	cin>>t;
	CI=p*(pow(1+r/100,t))-p;
	cout<<"compounf interest is:"<<CI;
return 0;
}
