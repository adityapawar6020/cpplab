#include<iostream>
using namespace std;
#include <string.h>


void userConcat(char *,char *);
int main()
{
	char a[10];
	char b[10];
	cout<<"Enter a first string: ";
	cin>>a;
	cout<<"Enter a second string: ";
	cin>>b;
	userConcat(a,b);
	cout<<"Concated string is: "<<a;
	
	
}
    void userConcat(char *p,char *q)
	{
    
      while(*++p);
      
      while(*p++=*q++);
    
/*    for(int i=0,j=0;   ;i<((stringLength(str1)+stringLength(str2)));i++){
        if(str1[i]=='\0')
		{
            str1[i]=str2[j];
            str1[i+1]='\0';
            j++;
        }*/
}
