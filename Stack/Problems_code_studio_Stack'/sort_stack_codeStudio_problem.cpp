// This code include function that will help to sort the stack using recursion 

/*
Code Implementation : 

#include <bits/stdc++.h> 

void sortedInsert(stack<int>& s, int num ) {

	// base Case 
	if( s.empty() || (!s.empty() && s.top() < num)) {
		s.push( num ) ;
		return ;
	}

	// Store top element of stack if number is not less then num
	int n = s.top() ;
	s.pop() ;

	//Recursive call 
	sortedInsert( s, num ) ;

	// Push back top element inside stack back
	s.push(n) ;
}

// Main Function Starts from here - > 

void sortStack(stack<int> &stack)
{
	// Write your code here

	// Solved this question using recursion 

	// Base Case 
	if( stack.empty()) {
		return ; 
	}

	// Store top number 
	int num = stack.top() ;
	stack.pop() ;

	// Recursive call
	sortStack(stack) ;

	// After movinf back when stack bacome empty insert in sorted order 
	sortedInsert(stack, num) ;

}


*/