#include<iostream>
using namespace std;

int getfib( int n )
{
    // Base case - self assumption 
    if(n == 1) return 0 ;
    if( n <= 3) return 1 ;

    // Love Bhaiya 
    if ( n == 0 ) return 0;
    if ( n == 1 ) return 1 ; 

    // Recursive Call 
    return getfib(n-1) + getfib(n-2) ;
}
 
int main()
{

    int n ;
    cout << " The value of n : " << endl ;
    cin >> n ;

    int result = getfib(n) ;

    cout << " The required result we get from " << result << endl ;

return 0;
}