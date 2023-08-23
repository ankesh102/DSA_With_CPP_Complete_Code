#include<iostream>
using namespace std;

bool linSearch( int *arr, int n, int k)
{
    if( n == 0) return false ;

/*  one Approach 
    if( arr[n-1] == k ) return true ;

    return linSearch(arr, n-1, k) ;

*/    

    // Second Method 
    if(arr[0] == k) return true ;

    return linSearch(arr+1, n-1, k) ;
}
 
int main()
{

    int n ;
    cout << "Enter size of an array : " << endl ;
    cin >> n ;

    int *arr = new int[n] ;

    for( int i = 0; i < n; i++ )
    {
        cin >> arr[i] ;
    }

    int element ;
    cout << "Enter the element to search in an array : " << endl ;
    cin >> element ;

    bool result = linSearch(arr, n, element) ;

    if(result)
    {
        cout << "Element found !!! " << endl ;
    } else 
    {
        cout << "Element not found !!" << endl ;
    }

    return 0;
}