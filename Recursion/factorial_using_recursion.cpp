#include<iostream>
using namespace std;

int factorial(int n)
{
    // First write base case 
    if (n == 0) 
    {
        return 1;
    }
    // bade problem me hm chote ko call kr rhe h aur usko solve kr rhe h
    // return n * factorial(n-1);
    int choti_problem = factorial(n-1);
    int badi_problem = n * choti_problem;
    return badi_problem;
}


 
int main()
{

    int n;
    cout<< "Please enter the number : " << endl;
    cin>> n;

    int ans = factorial(n) ;
    cout<< ans << endl;

return 0;
}