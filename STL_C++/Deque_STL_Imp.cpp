// In this module we are going to learn the STL Function of Deque -> Doubly ended queue 

#include<iostream>
#include<deque>
using namespace std;
 
int main()
{

    // Deque declaration
    deque<int> deq;

    // Size of Deque at time of declaration 
    cout<< " Size of Deque at time of Declaration : " << deq.size() << endl;

    // Insertion in deque
    deq.push_back(1); // Insertion from back 
    deq.push_front(2) ; // insertion from front 

    // Printing deque elements 
    for(int i : deq)
    {
        cout<< i << " " ;
    }
    cout<< '\n' ;


    cout<< "Size of Deque at time of insertion of 2 element :" << deq.size() << endl;

    // Deleting Element from front and Back 
    // deq.pop_back() ; // Deleting last element from back
    // deq.pop_front() ; // Deleting last element from front 

    cout<< "Size of Deque at time of Deletion  of 2 element :" << deq.size() << endl;
    
    // Accessing element at random index in deque 
    cout<< deq.at(1) << endl ; // Accessing at 1 index directly 

    cout<< deq.front() << endl; // Front element access
    cout<< deq.back() << endl; // Back element access

    // Check deque is Empty or Not 
    cout<< deq.empty() << endl; // Return bool value for empty or not 

    // Iterator in deque 
    deq.begin(); // iterator to begining of the list
    deq.end(); // iterator to end of the list

    // Erase function in Deque 
    deq.erase(deq.begin(), deq.begin() +2) ; // 1 Params :- Starting Index : 2 Params : till where we want to erasse

    // Print after erase 
    for( int i : deq)
    {
        cout<< i << " ";
    }






return 0;
}