// In this module we are solving the problem in which we need to sort the array 0...then 1 in this order;

#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i< n; i++)
    {
        cout<< arr[i] << " ";
    }
}

void sortArray(int arr[] , int n)
{
    int left = 0, right = n-1;
    while(left < right)
    {
        while(arr[left] == 0 && left < right)
        {
            left++;
        }

        while( arr[right] == 1 && left < right)
        {
            right --;
        }

        // Now ab left == 1 aur right ==0 hi bacha hoga 
        if(left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right --;
        }
    }

}

int main()
{

    int arr[20] = {1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0,0,0,1};

    sortArray(arr, 20);

    printArray(arr, 20); 

    return 0;
}