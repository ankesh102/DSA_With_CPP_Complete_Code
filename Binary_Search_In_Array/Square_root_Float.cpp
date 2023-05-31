#include <iostream>
using namespace std;

long long int SqrtInteger(int n)
{
    // Write your code here.
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start <= end)
    {

        if ((mid * mid) == n)
        {
            return mid;
        }
        else if ((mid * mid) < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precisionCount, int floorInt)
{
    double factor = 1;
    double ans = floorInt;
    for(int i = 0; i < precisionCount; i++)
    {
        factor = factor / 10;
        for(double j = ans; j*j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n; 
    cout<< "Enter the number " << endl;
    cin>> n;

    int floorInt = SqrtInteger(n);
    cout<< "The floor integer square root of given numebr is : " << floorInt << endl;

    double preciseValue = morePrecision(n, 3, floorInt) ;

    cout<< "The more precise value of sqrt of " << n << " is " << preciseValue << endl;

    return 0;
}