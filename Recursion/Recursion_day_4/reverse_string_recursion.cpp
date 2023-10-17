#include<bits/stdc++.h>
using namespace std;

// void reverse( string &str, int start, int end  )
// {
//     if(start > end ) return ;

//     swap(str[start], str[end]) ;

//     return reverse(str, start+1, end-1) ;
// }
 
// Function me Optimization : 

void reverse( string &str, int idx)
{
    if(idx > str.length() - idx - 1) return ;

    swap( str[idx], str[str.length() - idx - 1]) ;

    return reverse( str, idx+1) ;
}


int main()
{

    string str ;
    cout << "Please enter the string : " << endl ;
    cin >> str ;

    string *stptr = &str ;

    cout << " String Before reversed : " << str << endl; 

    // reverse(*stptr, 0, str.length()-1)  ;

    // Optimized function call
    reverse(*stptr, 0) ;

    cout << "Reversed String is : " << str << endl;



return 0;
}