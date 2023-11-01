// In this module we are going to implement K-Queue in an array by using the 
// Same approach as that of the n-stack in an array which involves next array to store next free space and 
// k - k sized array to store front and rear of k queue 

// Code Implementation 

#include<iostream>
using namespace std;

// Class implementation 
class kQueue {
    // data members 
    public: 
        int n ;
        int k ;
        int *front ;
        int *rear ;
        int *arr ;
        int freespot ;
        int *next ;

    public: 
        kQueue(int n, int k) { // Constructor 
            this -> n = n ;
            this -> k = k ;
            front = new int[k] ;
            rear = new int[k] ;

            // initialize front and rear for all queue 
            for( int i = 0; i < k; i++) {
                front[i] = -1 ;
                rear[i] = -1 ;
            }

            arr = new int[n] ;
            next = new int[n] ;

            // Initialize next 
            for( int i = 0; i < n; i++) {
                next[i] = (i+1)  ;
            }
            // Handilng last next space 
            next[n-1] = -1 ; // kyuki iske aage koi blank space available nhi hai

            freespot = 0 ;

        }

        // Enqueue / push Operation 
        void enqueue(int data, int qn ) {
            // Check overflow condition 
            if(freespot == -1) {
                cout << "Overflow Condition" << endl ;
                return ;
            }

            // Find first free index 
            int index = freespot ;

            // update freespot 
            freespot = next[index] ;

            // Check whether this insertion is of first element or not 
            if( front[qn-1] == -1 ) {
                front[qn-1] = index ;
            } 
            else {
                // Link new element to its previous element 
                next[rear[qn-1]] = index ;
            }

            // Update next 
            next[index] = -1 ;

            // Update rear 
            rear[qn-1] = index ;

            // Push element inside original array 
            arr[index] = data ; 
        }

        // Dequeue operation -> pop element and return that pop element 

        int dequeue( int qn ) { // kisme se pop karna hai
            // Check for underflow condition 
            if(front[qn-1] == -1) {
                cout << "Underflow Condition" << endl ;
                return -1 ; 
            }

            // Find index to pop 
            int index = front[qn - 1] ;

            // Front ko aage badhao -> update front 
            front[qn - 1] = next[index];

            // Manage the free slots 
            next[index] = freespot;
            freespot = index;

            // Return popped element
            return arr[index];

        }

};
 
int main()
{

    kQueue q(10, 3) ;

    // Enqueue operation -> popping element 
    q.enqueue(10, 1);
    q.enqueue(15, 2);
    q.enqueue(20, 1);
    q.enqueue(30, 1);

    // Dequeue operation -> popping element 
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    // Queue empty hai aur last me hm usme se phr se pop krne ka kosis kr rhe h
    cout<<q.dequeue(1)<<endl;

    


    return 0;
}