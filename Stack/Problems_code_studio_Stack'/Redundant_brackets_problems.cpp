// Function to solve redundant brackets problems using stack 
/*
#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st ;

    // Run a loop to check redundancy 
    for( int i = 0; i < s.length(); i++) {

        char ch = s[i] ;
        if( ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch) ;
        } else {
            // Agar ')' ya lowercase alphabet is present 
            if( ch == ')') {
                bool isRedundant = true ;
                while( st.top() != '(' ) {
                    char top = st.top() ;
                    if( top == '+' || top == '-' || top == '*' || top == '/') {
                        isRedundant = false ;
                    }
                    st.pop() ;
                }
                if( isRedundant == true ) {
                    return true ;
                }
                st.pop() ;
            }
        }

    }

    return false ; 
}
 */