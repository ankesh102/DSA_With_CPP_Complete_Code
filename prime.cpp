#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n < 1)
    {
        return false;
    }

    for( int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
 
int main()
{

    int n;
    cin>>n;

    bool result = isPrime(n);

    if(result)
    {
        cout<< "Number is Prime !!" << endl;

    } else {
        cout<< "Number is not Prime" << endl ;
    }

return 0;
}