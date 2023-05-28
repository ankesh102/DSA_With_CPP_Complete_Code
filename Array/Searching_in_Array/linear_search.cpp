// Linear Search 

#include<iostream>
using namespace std;

bool search (int arr[], int size , int searchKey)
{
    for(int i = 0; i < size; i++) 
    {
        if(arr[i] == searchKey){
            return 1;
        }
    }
    return 0;
}

int main() 
{

    int arr[10] = {2, 13, -3, -6, 10, 45, 4, 7, 1, 10};

    // We have to find weather 1 is present inside an array or not 

    cout<< "Please enter element you are looking for : "<< endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if( found )
    {
        cout<< "Element is present " << endl;

    } else {
        cout<< "Element is Absent " << endl;
    }


    return 0;
}