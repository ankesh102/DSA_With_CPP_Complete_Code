// Function Implementation 

/*
#include <bits/stdc++.h> 

void solve(stack<int>& st, int cnt, int& N) {
   
   // Base Case 
   if( cnt == N / 2) {
      st.pop() ;
      return ;
   }

   int num = st.top() ; // store top element 
   st.pop() ;
   // Next call 
   solve(st, cnt + 1, N) ;

   st.push(num) ;

}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0 ; 
   solve( inputStack, count, N) ;

   
}
*/