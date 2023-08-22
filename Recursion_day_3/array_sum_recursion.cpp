#include<iostream>
using namespace std;

int getSum( int *arr, int n)
{

    if(n == 0) return 0 ;

    int sum = arr[0] ;

    return sum + getSum(arr+1, n-1) ;
}
 
int main()
{
    int n ;
    cout << "Enter the size of Array : " << endl ;
    cin >> n ;

    int *arr = new int[n] ;

    for( int i = 0; i < n; i++ )
    {
        cin >> arr[i] ;
    }

    int res_sum = getSum(arr, n) ;

    cout << "The sum of array element is : " << res_sum << endl ;



    return 0;
}