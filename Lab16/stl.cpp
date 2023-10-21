#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
 
    cout << "Size of a vector is: " << g1.size();
    cout << "\nCapacity of a vector  : " << g1.capacity();
    cout << "\nMax_Size of a vector : " << g1.max_size();
 
    g1.push_back(20);
  cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
    
    cout << "\nSize : " << g1.size();
 
    
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
    }
