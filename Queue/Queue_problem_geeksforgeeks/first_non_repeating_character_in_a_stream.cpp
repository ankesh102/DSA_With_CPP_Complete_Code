// First non-repeating character in a stream

// In this question we are solving the question with the help of
    // 1. unorderd map to store count of character 
    // 2. queue for keeping track of first non repeating characters
    // 3. string to store ans that is stores the non repeating character upto that 
    // and Apply all the required condition to satisfy the logic and return the answer 


/*
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    
		    unordered_map<char, int> count ; 
		    queue<int> q ;
		    string ans = "" ;
		    
		    for( int i = 0; i < A.length(); i++ ) {
		        
		           char ch = A[i] ;
		           
		           // increase count 
		           count[ch]++ ;
		           
		           // Push inside the queue 
		           q.push(ch) ;
		           
		           while( !q.empty()) {
		               if( count[q.front()] > 1 ) {
		                   // repeating character 
		                   q.pop() ;
		               } else {
		                   // Non-repeating character 
		                   ans.push_back(q.front()) ;
		                   break ; // Jab ans mil gyi to aage traverse krke kya fayada 
		               }
		           }
		           
		           if( q.empty() ) {
		               ans.push_back('#') ;
		           }
		        
		    }
		    
		    return ans ;
		    
		    
		}
}; 

*/

