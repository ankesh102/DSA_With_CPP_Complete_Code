// In this module we are going to create how we can 
// create function which can calculate nCr value of mathematics.

#include<iostream>
using namespace std;

// Factorial Function 
int factorial(int n)
{
    int ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}


// nCr Function 

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    int uttar = num / denom ;
    return uttar;
}
 
int main()
{

    int n;
    cout<< "Please enter the value of n :"<< endl;
    cin>>n;
    int r;
    cout<< "Pleasr enter the value of r : "<< endl;
    cin>>r;

    cout<< "The answer is : " << nCr( n , r ) << endl;


return 0;
}   