#include<iostream>
using namespace std;

bool checkPalindrome(string &str, int idx )
{
    if( idx > str.length() - idx - 1) return true ; // Base case 

    if(str[idx] == str[str.length() - idx - 1])
    {
        idx++ ;
    }
    if(str[idx] != str[str.length() - idx - 1])
    {
        return false ;
    }

    return checkPalindrome(str, idx) ; 

}
 
int main()
{

    string name = "abbccbba" ;

    bool res = checkPalindrome(name, 0) ;

    cout << endl << endl ;

    if(res) 
    {
        cout << "String given is Palindrome !!! " << endl ;
    } else {
        cout <<" String not a palindrome !! "<<endl ;
    }

    cout << endl << endl ;



return 0;
}