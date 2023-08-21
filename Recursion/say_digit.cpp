#include<iostream>
using namespace std;

void say_digit( int n )
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six" , "seven", "eight","nine"} ;

    if( n == 0) return ; 
    int last = n % 10 ;
    say_digit(n/10);
    cout << arr[last] << " " ; 
}
 
int main()
{

    // string arr[10] = {"zero", "one", "two", "three", "four", "five", "six" , "seven", "eight","nine"} ;
    
    int n ;
    cout << "Enter number to print say digit " << endl ;
    cin >> n ;

    say_digit(n) ;

return 0;
}