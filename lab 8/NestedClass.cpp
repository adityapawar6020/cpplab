#include<iostream>
using namespace std;


  class A {
   public:
   class B {
      private:
      int num;
      public:
      void getdata(int n) 
	  {
         num = n;
      }
      void putdata() {
         cout<<"The number is "<<num;
      }
   };
};
  
  int main(){
  	
  	A::B b;
  	b.getdata(50);
  	b.putdata();
  	
  }
