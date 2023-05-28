#include<iostream>
using namespace std;

// Function for binary search 

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size-1;

    // int mid = (start + end) / 2; // INT_MAX Error occur if Start=end=2^31-1
    // SO to Avoid the write mid like this 
    int mid = start + ((end - start) / 2) ;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid] )
        {
            start = mid + 1;
        }
        // else if (key < arr[mid] ) // Else cover by default this condition 
        else
        {
            end = mid - 1;
        } 
        mid = (start + end) / 2;
    }
    return -1; // if element not found case present 
}
 
int main()
{

    int evenArr[6] = {2, 5, 6, 8, 10, 18} ;
    int oddArr[5] = {3, 7, 8, 13, 17};

    int evenIndex = binarySearch(evenArr, 6, 18); // 6 -> array size ,  18 -> Key wich need to search

    cout<< "The index value of 18 is " << evenIndex << endl; 

    int oddIndex = binarySearch(oddArr, 5, 13) ;

    cout<< "The index value of 13 is " << oddIndex << endl;

return 0;
}