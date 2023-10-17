#include<iostream>
using namespace std;

void merge( int *arr, int s, int e)
{
    int mid = s + (e - s) / 2 ;
    // finding length of individual array 
    int len1 = mid - s + 1 ;
    int len2 = e - mid  ;

    // Createing two array to copy the content of array (original) 
    int *arr1 = new int[len1] ;
    int *arr2 = new int[len2] ;

    // Copy the content of original array into both individual array 
    int mainArrayIndex = s ;
    for( int i = 0; i < len1 ; i++ )
    {
        arr1[i] = arr[mainArrayIndex++] ;
    }

    mainArrayIndex = mid + 1 ;
    for( int i = mid; i < len2 ; i++ )
    {
        arr2[i] = arr[mainArrayIndex++] ;
    }

    // Now merge two sorted Array 
    int index1 = 0;
    int index2 = 0; 
    mainArrayIndex = s ;

    while( index1 < len1 && index2 < len2 ) 
    {
        if(arr1[index1] < arr2[index2])
        {
            arr[mainArrayIndex++] = arr1[index1++] ;
        } else {
            arr[mainArrayIndex++] = arr2[index2++] ;
        }
    }

    // If element left aijn any of the array then we need to check upon that 
    while( index1 < len1 )
    {
        arr[mainArrayIndex++] = arr1[index1++] ;
    }

    while( index2 < len2 )
    {
         arr[mainArrayIndex++] = arr2[index2++] ;
    }

}

void mergeSort( int *arr, int start, int end) 
{
    // Base case 
    if( start >= end )
    {
        return ;
    }

    // calculate mid 
    int mid = start + ( end - start ) / 2 ;

    // sort left part 
    mergeSort(arr, start, mid) ;

    // sort right part 
    mergeSort(arr, mid+1, end) ;

    // merge both sorted array

    merge(arr, start, end ) ; 


}
 
int main()
{

    int arr[5] = {1, 3, 2, 5, 4} ;
    int n = 5 ;

    mergeSort(arr, 0, n-1 ) ;

    for( int i = 0; i < n; i++ ) 
    {
        cout << arr[i] << " " ;

    }



    return 0;
}