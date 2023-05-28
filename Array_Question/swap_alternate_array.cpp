// Ques 1 :  Alternate swapping of an array

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size)
// {
//      int start = 0;
//      int second = start + 1;
//      while (start < size || second < size)
//      {
//         swap(arr[start], arr[second]);
//         start += 2;
//         second += 2;
//      }
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i<n; i++)
//     {
//         cout<< arr[i] << " ";
//     }
//     cout<< endl;
// }

// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     // Printing array
//     printArray(arr, 10);

//     // Reversing alternate of an array
//     reverse(arr, 10);

//     // Printing after reversing
//     printArray(arr, 10);
//     return 0;
// }

// Another Approach to swap alternate of an array -> Love Bubbar Bhaiya


#include <iostream>
using namespace std;

void alternateReverse(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 2, 4, 5, 6, 7};

    alternateReverse(arr, 6);

    printArray(arr, 6);

    return 0;
}