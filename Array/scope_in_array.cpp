#include<iostream>
using namespace std;

// Function 
int updateArr(int arr[], int n)
{
    cout<< "Inside the UpdateArr Function !"<< endl;

    arr[0] = 120;

    for(int i = 0; i<n;i++)
    {
        cout<< arr[i] << " " ;
    }

    cout<< endl;
    cout<< "Going Back to Main Function !!" << endl;
}

int main() 
{

    // Scope Concept in Array 

    int arr[3] = {1,2,3};

    updateArr(arr, 3);

    // Printing the array
    // In case of array updation directly stores in actual array no cpy is being generated
    cout<< "Printing the array in main Function " << endl;
    for(int i = 0; i<3; i++)
    {
        cout<< arr[i] << " ";
    }

    cout<< endl;
    return 0;
}