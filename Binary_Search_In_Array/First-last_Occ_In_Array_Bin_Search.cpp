#include <iostream>
using namespace std;

// Function for First Occurence
int firstOcc(int arr[], int n, int key)
{

    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)  // mil to gya pr left me dekh le last me pada hai kya
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key) // left me jao
        {
            end = mid - 1;
        }
        else if (arr[mid] < key) // right me jao na re baba
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans; // If element is not present in an array
}

int lastOcc(int arr[], int n, int key)
{

    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key) // mil to gya pr right me dekh le last me pada hai kya
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)  // left me jao 
        {
            end = mid - 1;
        }
        else if (arr[mid] < key) // ab right me to jana padega re baba
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int evenArr[6] = {3, 2, 3, 3, 5, 6};

    int firstOccIndex = firstOcc(evenArr, 6, 3);

    cout << "The index of first occurence of element 3 in Array is : " << firstOccIndex << endl;

    int lastIndexOcc = lastOcc(evenArr, 6, 6);

    cout << "The index of Last Occurence of 6 element is " << lastIndexOcc << endl;

    return 0;
}