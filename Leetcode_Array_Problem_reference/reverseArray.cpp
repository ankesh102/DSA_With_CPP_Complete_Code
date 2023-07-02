// In this module we are going to return the reverse of an array 

#include<bits/stdc++.h>
using namespace std;

void reverseArray( int arr[], int n)
{
    int start = 0; 
    int end = n-1 ;
    while(start <= end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--; 
    }
}

// Printing array after reversing the array 
void printArray( int arr[], int n)
{
    for( int i = 0; i < n; i++)
    {
        cout<<  arr[i] << " " ;

    }
}
 
int main()
{

    int n ; 
    cout << "Please enter N : " << endl ;
    cin >> n ;

    int arr[n] ; 

    cout<< "Printing Array before reversing : "<< endl; 

    for( int i = 0; i < n; i++ )
    {
        cin >> arr[i] ;
    }

    reverseArray(arr, n); 
    //Printing reversed array using function call.
    cout<< "Printing array after reversing : " << endl ;
    printArray(arr,n); 
    


return 0;
}