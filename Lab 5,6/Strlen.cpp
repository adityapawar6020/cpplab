#include<iostream>
using namespace std;
int fun(char *b);
int main()
{
	int length;
	char a[10];
	cout<<"Enter a string :";
	cin>>a;
	
	length = fun(a);
	cout<<"The length of the string is "<<length;
}

int fun(char *b)
{
	int length = 0;
	while(*b != '\0')
	{
		length ++;
		b++;
	}
	return length;
}
