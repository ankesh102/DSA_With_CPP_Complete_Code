// In this module we are going to learn in-built function of static Array of STL 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    // OLD Method 
    int basicArr[3] = {1, 2, 3};
    
    // Static Array Declaration using STL 
    array<int,4> arr = {1, 2, 3, 4} ;

    // Calculating size of STL Array
    int size = arr.size() ; 

    // Traversing STL Array
    for( int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }

    cout<< "Element at 2nd index : " << arr.at(2) <<  endl; 

    cout<< "Empty or Not : " << arr.empty() << endl; // Returns Boolean Value If Empty -> true : Else -> False 

    cout<< "First Element : " << arr.front() << endl;
    
    cout<< "Last Element " << arr.back() << endl; 
    

return 0;
}