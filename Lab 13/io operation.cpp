#include <iostream>
#include <istream>
#include <sstream>
#include <string>
 
using namespace std;
 
int main()
{
    istringstream str("           welcome");
    string line;
    getline(str >>ws, line);
    cout << line << endl;
    
    istringstream str1("          to the CPP");
    string line1;
    getline(str1 >>ws, line1);
    cout << line1 << endl;

    return 0;
}
