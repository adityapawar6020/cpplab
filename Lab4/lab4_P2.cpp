	#include<iostream>
	using namespace std;
	void swap(int&, int&);
	int main(){
		int a,b;
		cout<<"enter value of a and b:";
		cin>>a>>b;
			cout<<"before swaping:"<<a<<b<<endl;
		swap(a,b);
			cout<<"after swaping:"<<a<<b<<endl;
	
		
	}
	void swap(int& p, int& q){
		int temp;
		temp=p;
		p=q;
		q=temp;
		
	}
