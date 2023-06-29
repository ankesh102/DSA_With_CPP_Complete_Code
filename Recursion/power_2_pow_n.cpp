#include<iostream>
using namespace std;

// Recursive function to calculate 2 to the power n
int powerOfTwo(int n)
{
    // Base case 
    if(n == 0) return 1;

    // Recursive Relation 
    int smaller_Problem = powerOfTwo(n - 1);
    int bigger_Problem = 2 * smaller_Problem;

    return bigger_Problem;
} 
 
int main()
{

    int n;
    cout<< "Please enter the value of n : " << endl;
    cin>>n;

    int ans = powerOfTwo(n);

    cout<< "The value of 2 power "<<n << " is : " << ans<<endl;

return 0;
}