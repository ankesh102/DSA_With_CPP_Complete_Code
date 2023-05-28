#include<iostream>
using namespace std;

// Function to reverse the array 
void reverseArray(int arr[] , int size)
{
    int ans = arr[size];
    for(int i = 0; i < size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
        
    }
}

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
    int num[6] = {1, 2, 3, 4, 5, 6};
    int num1[5] = {-2, 3, 56, 8, 10};

    // Printing Original Array 
    cout << "Original Array: "; 
    for(int i = 0; i < 6; i++)
    {
        cout<< num[i] << " ";
    }
    cout<< "New One" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout<< num1[i] << " ";
    }

    // Reversing the array 
    reverseArray(num, 6);
    reverseArray(num1, 5);

    cout << "\nReversed Array: ";
    printArray(num, 6);
    printArray(num1, 5);
    return 0;
}