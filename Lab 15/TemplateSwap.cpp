#include<iostream>
using namespace std;


template <class T>

T Userswap(T a,T b){
	cout<<"Before swapping:"<<a<<b<<endl;
	T temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swpping:"<<a<<b;
}

int main(){
	Userswap(10,20);	
}
