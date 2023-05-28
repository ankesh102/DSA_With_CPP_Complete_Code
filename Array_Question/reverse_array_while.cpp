// Reversing an array using while loop 

#include<iostream>
using namespace std;

// Function to reverse an array

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while( start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


// Function to print entire element of an array
void printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
}



int main()
{
    int arr[6] = {2, 3, 5, 6, 7, 9};
    int brr[5] = {-1, 8, 5, 78, 34};

    // Printing Original Array 
    printArray(arr, 6);
    printArray(brr, 5);

    // Reversing array
    reverse(arr, 6);
    reverse(brr, 5);

    // Printing Reversed Array
    printArray(arr, 6);
    printArray(brr, 5);


    return 0;
}