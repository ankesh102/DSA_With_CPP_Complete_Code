// In this module we are going to learn one important STL Function i.e -> Vector 

#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    // Vector -> Dynamic Size Array 

    // Declaration of Vector 
    vector<int> array ;

    // Finding memory allocated to vector while declaration 
    // cout << "Capacity of Vector at declaration : " << array.capacity() << endl;

    // Pushing Element in Vector 
    array.push_back(1); 
    // cout << "Capacity of Vector after inserting first element  : " << array.capacity() << endl; // cap : 1


    array.push_back(2); 
    // cout << "Capacity of Vector after inserting second element  : " << array.capacity() << endl; // cap : 2

    array.push_back(3); 
    // cout << "Capacity of Vector after inserting third element  : " << array.capacity() << endl; // cap : 4


    array.push_back(4); 
    // cout << "Capacity of Vector after inserting fourth element  : " << array.capacity() << endl; // cap : 4

    array.push_back(5); 
    // cout << "Capacity of Vector after inserting fifth element  : " << array.capacity() << endl; // cap : 8 

    array.push_back(6); 
    // cout << "Capacity of Vector after inserting sixth element  : " << array.capacity() << endl; // cap : 8 and so on........ (Capacity - >  Memory allocated ) 

    // Size of Vector : No of Element count in Vector 
    // cout << "The size of Vector array till six element insertion : " << array.size() << endl;  // Size - Element count -> 6

    // Accessing Random index element in vector STL 
    // cout << " Element at Random index is :  " <<  array.at(2) << endl; 

    // Accessing first Element 
    // cout<< "First Element : " << array.front() << endl; 

    // Accessing Last Element 
    // cout<< "Last Element : " << array.back() << endl; 

    // cout<< "Printing Element Before Pop : " << endl;
    // for(int i : array) 
    // {
    //     cout << i << " " ;
    // }

    // Deleting Last Element in Vector 
    // array.pop_back() ;

    // cout<< "\n" ;

    // cout<< "Printing Element Before Pop : " << endl;
    // for(int i : array) 
    // {
    //     cout << i << " " ;
    // }

    // Clear in Vector STL 
    cout<< "Size before clear : " << array.size() << endl; 
    cout<< "capacity before clear : " << array.capacity() << endl; 
    array.clear() ;
    cout<< "Size after Clear : " << array.size() << endl;
    cout<< "capacity after clear : " << array.capacity() << endl; 

    return 0;
}