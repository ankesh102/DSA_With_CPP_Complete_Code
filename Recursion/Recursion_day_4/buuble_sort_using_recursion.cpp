#include<iostream>
using namespace std;

void sortArray( int *arr, int n)
{
    // Base case 
    if(n == 0 || n == 1) return ; // ALready Sorted 

    // Ek case solve kro baki apne aap solve ho jayegi - shift 1 element to right position
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1] ) ;
        }
    }

    // Recursive call 
    sortArray(arr, n-1) ;
}
 
int main()
{
    int arr[7] = {2, 4, 6, 2, 4, 3, 6} ;

    sortArray(arr, 7) ;

    for (int i = 0; i < 7; i++)
    {
        /* code */
        cout << arr[i] << " " ;
    }
    



return 0;
}