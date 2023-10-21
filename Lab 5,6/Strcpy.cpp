#include<iostream>
using namespace std;


   
void userCopy(char *, char *);
   int main()
   {
   	  char a[10];
   	  char b[20];
   	  
   	   cout<<"Enter a string\n";
   	   cin>>a;
   	   userCopy(b,a);
   	   cout<<"copied string is: "<<a;
   	
   	
   }  
   
      void userCopy(char *q , char *p){
      	
      int i;
      
      for(i=0;q[i]='\0';i++)
	  {
      	*q=*p;
	  }
	  *q='\0';
	  }
   
   
