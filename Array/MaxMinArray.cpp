#include <iostream>
using namespace std;

// MaxMin Array Function Declaration

int getMax(int arr[], int size)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        // Predefined Function to find Max
        maxi = max(maxi, arr[i]);

        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    // Returning maximum value of an array
    return maxi;
}

int getMin(int arr[], int size)
{
    int mini = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        // Predefined function to find Minimum
        mini = min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    // Returning minimum value of an array
    return mini;
}

int main()
{

    int size;
    cout << "Please enter size : " << endl;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<< "Maximum Value of an array is : " << getMax(arr, size) << endl;
    cout<< "Minimum Value of an array is : " << getMin(arr, size) << endl;

    return 0;
}