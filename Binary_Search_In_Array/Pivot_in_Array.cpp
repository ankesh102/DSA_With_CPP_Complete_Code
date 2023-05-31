// In this module I am goint to find pivot in an array

#include<iostream>
using namespace std;

// function to find pivot 

int findPivot(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end-start) / 2;

    while(start < end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        } else {
            end = mid ;
        }
        mid = start + (end-start) / 2;
    }
    return start;
}

int main()
{   

    int arr[6] = {8, 9, 10, 2, 4, 7}; // Pivot is minimum amaong the array.

    int pivotIndex = findPivot(arr, 6) ;

    cout<< "The pivot element present in this array is : " << pivotIndex << endl;


    return 0;
}