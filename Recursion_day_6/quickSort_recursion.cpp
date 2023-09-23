#include<iostream>
using namespace std;

int partition( int *arr, int st, int end )
{
    int pivot = arr[st] ;

    int count = 0 ;
    for( int i = st + 1; i <= end; i++)
    {
        if( pivot >= arr[i]) 
        {
            count++ ;
        }
    }

    // Place pivot element to its right index 
    int pivotIndex = st + count ; 

    swap( arr[pivotIndex], arr[st]) ; 

    // Left aur right sambhal lena hai 
    int i = st;
    int j = end ; 
    while(i < pivotIndex && j > pivotIndex )
    {
        while(arr[i] <= pivot ) i++ ;
        while(arr[j] > pivot ) j-- ;

        if( i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]) ;
        }
    }

    return pivotIndex ; 

}

void quickSort( int *arr, int st, int end)
{
    // Base Case 
    if( st >= end ) return ;

    // Partition karenge 
    int p = partition( arr, st, end) ;


    // Recursive Call 
    quickSort(arr, st, p-1) ;

    quickSort(arr, p+1, end) ;
}
 
int main()
{
    int arr[22] = {5, 3, 10, 34, 2, 10, 23,45 ,343, 67,45,45 ,23,67 ,34,4 ,2 ,3,5 ,23, 2,3} ;
    int n = 22 ; 

    quickSort( arr, 0, n-1 ) ;

    for( int i = 0 ; i < n ; i++ )
    {
        cout << arr[i] << " " ;
    }


    return 0;
}