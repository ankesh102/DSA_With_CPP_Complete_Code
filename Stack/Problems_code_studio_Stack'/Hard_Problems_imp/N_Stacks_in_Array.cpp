// This module implement how we can create and initialize all the required operation in an 
// array to implememnt n stack inside an array with optimized space 


/*
#include <bits/stdc++.h> 
class NStack
{
    // intialize all required variables and array
    int *arr ; 
    int *top ; 
    int *next ;
    int n , s ; 
    int freespot ; 


public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        // Write your code here.
        // Constructor 
        int n = N , s = S ;
        // Allocating size to each array individuals 
        arr = new int[s] ;
        top = new int[n] ;
        next = new int[s] ;

        // Initialize top 
        // memset ka tarika 
        for( int i = 0; i < n; i++ ) {
            top[i] = -1 ;
        }

        // Initialize next 
        for( int i = 0 ; i < s ; i++ ) {
            next[i] = i+1 ;
        }
        // update last index to -1 as after it no empty space preset 
        next[s-1] = -1 ; 

        freespot = 0 ; // Initializing free spot 

    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        //  Check for overflow 
        if( freespot == -1 ) {
            return false ;
        }

        // Find index 
        int index = freespot ;

        // update freespot 
        freespot = next[index] ;

        // inserting element into an array 
        arr[index ] = x ;

        // Updating next array 
        next[index] = top[m-1] ;

        // updating top 
        top[m-1] = index ;


        return true ;


    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.

        // Check for underflow 
        if( top[m-1] == -1) {
            return -1 ;
        }

        // Saara operation push ke opposite kr denge 

        int index = top[m-1] ;

        top[m-1] = next[index] ;

        next[index] = freespot ;

        freespot = index ; 

        return arr[index] ;


    }
};
*/