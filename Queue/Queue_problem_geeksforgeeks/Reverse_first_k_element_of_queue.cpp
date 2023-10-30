// Reverse First K elements of Queue

// Utilized simple queue and stack concept to reverse the first kth index of an queue 

/*
#include<stack> 

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    stack<int> s ;
    
    for( int i = 0; i < k; i++ ) {
        int element = q.front() ;
        q.pop() ;
        s.push(element) ;
    }
    
    for( int i = 0; i < k; i++) {
        int element = s.top() ;
        s.pop() ;
        q.push(element) ;
    }
    
    for( int i = 0; i < (q.size())-k; i++ ) {
        
        int element = q.front() ;
        q.pop();
        q.push(element) ;
        
    }
    
    return q ;
}
*/

