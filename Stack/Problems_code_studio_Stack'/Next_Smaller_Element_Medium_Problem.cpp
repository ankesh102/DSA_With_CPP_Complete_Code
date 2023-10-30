// In this module tyhis is warmup question for Largest Rectangular Area in Histogram
// Here we need to find next smallest element and to optimize this
// we starts from right to left 

// Code Implementation

/*
#include<stack> 

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.

    // Optimized Approach 

    // Initialize a stack 
    stack<int> s ;
    s.push(-1) ;

    vector<int> ans(n) ; 

    // Run a loop to find min from right to left in O(n) 
    for( int i = n-1; i >= 0; i-- ) {
        
        int curr = arr[i] ;
        while(s.top() >= curr ) {
            s.pop() ; // jab-tak bada element mil rha hai tb tk pop karte jayenge 
        }

        // Ab chota mil gya 
        //Ans is stack ka top 
        ans[i] = s.top();
        s.push(curr) ;
    }

    return ans ; 
}

*/