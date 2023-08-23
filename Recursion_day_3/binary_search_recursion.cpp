#include<iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    cout << "The value of s is " << s << " and e " << e << endl ;
    for(int i = s; i <= e; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

bool binarySearch( int arr[], int s, int e, int key) 
{

    print(arr, s, e) ;
    // base case 
    if(s > e) return false ;

    int mid = s + (e - s) / 2 ;
    if(arr[mid] == key) 
    {
        return true ;
    } else if( arr[mid] > key)
    {
        return binarySearch(arr, s, mid - 1, key) ;
    } else {
        return binarySearch(arr , mid+1, e,key);
    }

    return true ; 

}
 
int main()
{

    int n ;
    cout << "Please enter the size of an array : "<< endl; 
    cin >> n ;

    int *arr = new int[n] ;

    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i] ;

    }

    int key ;
    cout << "Enter the key which you want to search for : " << endl ;  
    cin>> key ;

    int res = binarySearch(arr, 0, n-1, key) ;

    if(res)
    {
        cout << "Element is found !!" ;

    } else {
        cout << "Element is not found !!" << endl ;

    }



return 0;
}