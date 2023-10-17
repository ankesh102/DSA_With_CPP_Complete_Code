#include<iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    // Solve using recursion 

    // base case 
    if(n == 0 || n == 1) return true ;

    // Processing part and recursive funtion 
    if(arr[0] > arr[1])
    {
        return false ;
    } else {
        bool ans = isSorted( arr + 1, n - 1) ;
        return ans ;
    }
}
 
int main()
{

    int n ;
    cout<<"Enter the number of elements in array : ";
    cin >> n ;

    int *arr = new int[n] ;

    for(int i = 0 ; i < n; i++ )
    {
        cin >> arr[i] ; 
    }

    bool result = isSorted(arr, n) ;

    if(result)
    {
        cout << "Array is sorted " << endl ;
    } else {
        cout << "Array is not sorted " << endl ;
    }

return 0;
}