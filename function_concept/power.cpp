#include<iostream>
using namespace std;

// Declaration o0f Function 

int pow(int a, int b)
{
    int ans = 1;

    for( int i = 1; i<=b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cout<< "Please enter the value of a and b " << endl;
    cin>> a >> b;

    int result = pow(a, b);

    cout << result <<endl;

    return 0;
}