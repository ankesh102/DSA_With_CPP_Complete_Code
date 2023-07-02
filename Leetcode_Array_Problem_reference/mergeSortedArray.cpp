// In this module we are given with two sorted Array 
// Our task is to merge them ad maintain that after merging they remain sorted 

#include<bits/stdc++.h>
using namespace std;

void mergeSortedArr( int arr1[], int n , int arr2[], int m, int arr3[])
{
    int i = 0 , j = 0 ;
    int k = 0 ;
    while(i < n && j < m) 
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i] ; 
            k++;
            i++;
        } else {
             arr3[k] = arr2[j] ;
             k++; 
             j++; 
        }
    }

    // If element remains in Array1 copy them 
    while( i < n)
    {
        arr3[k] = arr1[i] ;
        i++;
        k++;
    }  

    // If element remains in Array2 copy them 
    while( j < m)
    {
        arr3[k] = arr2[j] ; 
        j++;
        k++;
    }

}

void printArray( int arr[], int size3)
{
    for( int i = 0; i < size3; i++)
    {
        cout << arr[i] << " " ;
    }
}
 
int main()
{

    int size1 = 5 , size2 = 3 ; 
    int size3 = size1 + size2 ;

    int arr1[size1] , arr2[size2] , arr3[size3] = {0}; 

    // Give input in sorted order 
    cout<< "Input for 1 sorted Array : " << endl ;
    for( int i = 0 ; i < size1; i++)
    {
        cin >> arr1[i] ; 
    }

    cout<< " Input for 2 sorted Array " << endl ;
    for ( int j=0 ;j<size2 ; j++ )
    {
        cin >>arr2[j];
    }

    mergeSortedArr( arr1, size1, arr2, size2, arr3) ;

    cout << "Printing Sorted Array after merging both the arrays : " << endl ; 

    printArray(arr3, size3);



    return 0;

}