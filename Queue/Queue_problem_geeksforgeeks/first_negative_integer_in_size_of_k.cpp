// First negative integer in every window of size k

// Using the approach of doubly ended queue 

/*
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
        deque<long long int> dq ;
        vector<long long> ans ;
        
        // Process first window of size k
        for( int i = 0; i < K; i++ ) {
            if( A[i] < 0 ) {
                dq.push_back(i) ; // Pushing index 
            }
        }
        
        // store ans of first k-sized window 
        if( dq.size() > 0 ) {
            ans.push_back(A[dq.front()]) ;
        }
        else {
            ans.push_back(0) ;
        }
        
        // Process for remaining windows 
        for( int i = K; i < N; i++ ) {
            
            // Removal 
            if( !dq.empty() && (i - dq.front() >= K )) {
                dq.pop_front() ;
            }
            
            // Addition of current element 
            if( A[i] < 0 ) {
                dq.push_back(i) ; 
            }
            
            // Ans me store kr diya 
            if( dq.size() > 0 ) {
                ans.push_back(A[dq.front()]) ;
            }
            else {
                ans.push_back(0) ;
            }
        }
        
        return ans ;
        
                                                 
 }
*/

