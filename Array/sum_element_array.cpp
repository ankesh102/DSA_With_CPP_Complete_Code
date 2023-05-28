#include<iostream>
using namespace std;

// Finding sum of an array
int sumArray(int arr[], int n)
{
    int ans = 0;
    // Finding sum of array 
    for(int i=0; i<n; i++)
    {
        ans = ans + arr[i];
    }
    return ans;
}

int main() 
{

    int size;
    cout<< "Please Input Array Size : " << endl;
    cin>> size;

    int arr[100];

    // Taking input of an array 
    for(int i = 0; i< size; i++)
    {
        cout<< "Please input "<< i <<" array element :" << endl;
        cin>> arr[i] ;
    }

    int answer = sumArray(arr, size);

    // Printing sum of an array 
    cout<< "Sum of Array : " << answer << endl;

    return 0;
}