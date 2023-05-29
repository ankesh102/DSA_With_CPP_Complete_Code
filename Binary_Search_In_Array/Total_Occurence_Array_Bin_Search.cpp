#include<iostream>
using namespace std;



int leftOccurenceIndex( int arr[], int n, int key)
{
    // Need to find no of occurence of key in an array
    int start =0, end = n-1;
    int mid = start + (end - start) / 2;
    int ans = 0 ; 
    while(start <= end)
    {
        if(arr[mid] == key)
        {  
            ans = mid;
            end = mid - 1;

        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        } 
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int rightOccurenceIndex( int arr[], int n, int key)
{
    // Need to find no of occurence of key in an array
    int start =0, end = n-1;
    int mid = start + (end - start) / 2;
    int ans = 0;
    while(start <= end)
    {
        if(arr[mid] == key)
        {  
            ans = mid;
            start = mid + 1;

        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        } 
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int totalOccurence(int arr[], int n, int key)
{
    int firstOcc = leftOccurenceIndex(arr, n, key);
    int lastOcc = rightOccurenceIndex(arr, n, key);
    return (lastOcc - firstOcc + 1);
}
 
int main()
{

    int even[10] = {1, 2, 3, 4, 5, 6, 10, 10, 10, 10};

    int totalOcc = totalOccurence(even, 10, 10);
    cout << "Total occurence of 10 in the array is " << totalOcc<< endl;



return 0;
}
