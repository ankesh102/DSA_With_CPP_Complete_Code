// Implementation of circular queue using array and all of its push 
// pop operation by handling all the edge cases of queue 


/*
#include <bits/stdc++.h> 
class CircularQueue{
    int *arr ;
    int front ;
    int rear ;
    int size ;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size = n ;
        arr = new int[size] ;
        front = -1 ;
        rear = -1 ;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        // We need to hanlde all the possible cases when we want to insert in a
        // circular queue 

        if( (front == 0 && rear == size - 1 ) || (rear == (front - 1) % (size -1) ) ) {
            // cout << "Queue is full " << endl ;
            return false ; // matlab que bhari hui dono edge case check krke
        }
        else {
            if( front == -1 ) { // first elemet aaya hi push krne ko 
                front = 0;
                rear = 0;    
            }
            else if( rear == size - 1 && front != 0) {
                rear = 0 ;// Rear ko first position pr le aao -> cyclic nature maintained  
            } else { // Noraml flow 
                rear++ ;
            }
        }
        // Push inside the queue 
        arr[rear] = value ;
        return true ;

    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.

        // check queue is empty or not 
        if( front == -1 ) {
            // cout << "Queue is Empty " << endl ;
            return -1 ; 
        }

        // Store answer to return which one gets popped out
        int ans = arr[front] ;
        arr[front] = - 1 ; 

        if( front == rear ) {
            // Single element in queue is present 
            front = rear = -1 ; 

        } else if( front == size - 1) {
            front = 0 ; // To maintain cyclic nature 
        } else {
            // Normal condition 
            front++ ;
        }
        return ans ;

    }
};
*/