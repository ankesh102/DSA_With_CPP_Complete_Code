#include<iostream>
using namespace std;

class stack {
    // properties
    public:
        int *arr ;
        int top ; // Index to track stack 
        int size ; // size of an array

    // behaviour 
    // Constructor 
    stack( int size ) {
        this -> size = size ;
        arr = new int[size] ;
        int top = -1 ;
    }

    void push( int element ) {
        if( size - top > 1) {
            top++ ;
            arr[top] = element ;
        } else {
            cout << "Stack Overflow" << endl ;
        }
        
    }

    void pop() {
        if( top >= 0 ) {
            top-- ;
        } else {
            cout << "Stack underflow " <<  endl ;
        }
    }

    int peek() {
        if(top >= 0) {
            return arr[top] ;
        } else {
            cout << "Stack is Empty " << endl ;
            return -1 ;
        }
    }

    bool isEmpty() {

        if( top == -1 ) {
            return true ;
        }
        else {
            return false ;
        }
    }
};


int main()
{

    // creating stack 
    stack st(5) ; // Creating stack and passing 5 as size of stack

    // push 
    st.push(22) ;
    st.push(43) ;
    // st.push(44) ;

    // cout << st.peek() << endl ;

    // pop


    // isEmpty

    if(st.isEmpty()) {
        cout << "Stack is Empty " << endl ;
    } else {
        cout << "Stack is not empty" << endl ;
    }




return 0;
}