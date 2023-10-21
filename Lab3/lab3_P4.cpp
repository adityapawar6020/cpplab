#include<iostream>
using namespace std;
int main()
{	
	int i;
 cout<<"Enter a number:1,2 or 3: ";
 cin>>i;
	switch (i) {
	case 1:
		cout << "number is 1";
		break;
	case 2:
		cout << "number is 2";
		break;
	case 3:
		cout << "number is 3";
		break;
	default:
		cout << "number other than 1,2,3";
		break;
	}
	return 0;
}

