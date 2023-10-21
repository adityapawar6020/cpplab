#include<iostream>
using namespace std;

int main(){
	
	int i,j;
	for(i=2;i<=50;i++)
	{
		
		for(j=2;j<i;j++)
	{
			
			if(i%j==0)
			{
				break;
			}
		
	}
		if(j==i)
		{
			cout<<i<<" is prime\n";
		}else
		{
			
			cout<<i<<" is not prime\n";
		
     	}
	}
}
