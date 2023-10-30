// This is a famous problem of stack which is solved on geeks for geeks 

// Function to solve problem for this in step by step manner 

/*

class Solution 
{
    private: 
        bool knows( vector<vector<int>> &M, int a, int b, int n) {
            // Check if a knows b 
            if( M[a][b] == 1) {
                return true ;
            } else {
                return false ;
            }
        }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
        // Step wise Solution 
        
        stack<int> s ;
        // Step 1 : Push all element inside stack 
        for( int i = 0; i < n; i++ ) {
            s.push(i) ;
        }
        
        
        // Step 2 : Get 2 elements out of stack and compare 
        
        while( s.size() > 1) {
            int a = s.top() ;
            s.pop() ;
            
            int b = s.top() ;
            s.pop() ;
            
            if(knows(M, a, b, n)) {
                s.push(b) ;
            } else {
                s.push(a) ;
            }
        }
        
        
        // Step 3 : Single element left in the stack that may be the potential candidate 
        // So verify it 
        
        int candidate = s.top() ;
        
        bool rowCheck = false ;
        int zeroCnt = 0;
        
        for( int i = 0; i < n; i++) {
            if( M[candidate][i] == 0) {
                zeroCnt++ ;
            }
        }
        
        // Check all zero hai ki nhi kyuki 0 hogi tbhi n tk count ho payegi
        if( zeroCnt == n) {
            rowCheck = true ;
        }
        
        bool colCheck = false ;
        int oneCnt = 0; 
        
        for( int i = 0; i < n; i++ ) {
            if( M[i][candidate] == 1) {
                oneCnt++ ;
            }
        }
        
        // Check all one left only diagonal so one count has to be n-1 
        if( oneCnt == n-1) {
            colCheck = true ;
        }
        
        if( rowCheck && colCheck ) {
            return candidate ;
        }
        else {
            return -1 ;
        }
         
        
    }
};

*/