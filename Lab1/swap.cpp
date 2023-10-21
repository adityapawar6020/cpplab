#include <iostream>
using namespace std;
int main()
{
int a,b,t;
cout<<"enter 2 no:";
cin>>a>>b;
cout<<"before swap:"<<a <<" "<<b<<endl;
t=a;
a=b;
b=t;
cout<<"after swap:"<<a <<" "<< b;

return 0;
}
