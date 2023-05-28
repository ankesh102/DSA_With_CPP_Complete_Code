#include<iostream>
using namespace std;

// Function to print entire array 
void printArray(int arr[], int size) {

    cout<< "Printing the array !!" << endl;
    for(int i = 0; i < size; i++ ){
        cout<< arr[i] << " ";
    }   
    cout<< "Printing Done" << endl;
}

int main()
{
    // array declaration 
    int number[15];

    // cout<< "Value at 0 index is " << number[0] << endl; // Garbage Value
    // cout<< "Value at 20 index is " << number[20] << endl; // can't access Value out of size - size = 15

    // Initialising an Array
    int second[3] = {3, 5, 8};

    cout<< "Value at 2 index is " << second[2] << endl;

    int third[15] =  {9, 12} ;

    // printArray(third, 3);

    // Next concept -> Initializing all location with 0 
    int fourth[10] = {0};
    
    // printArray(fourth, 10);


    // Next concept -> Initializing all location with 0 ->  Not possible with below line
    int sixth[10] = {1};
    // printArray(sixth, 10);

    // Next xoncept -> initialising all location  with any value rather then 0 -> done with this technique
    int fifth[10] = {};

    int val = 1;
    for(int i = 0; i<10; i++)
    {
        fifth[i] = val;
    }
    // Printing Entire array
    // printArray(fifth, 10);


    // Array of character Type 
    char ank[5] = {'a', 'b', 'c', 'd', 'e'};

    cout<< "Printing the array !!" << endl;
    int size = 5;
    for(int i=0;i<size;i++){
        cout<< ank[i] << " ";

    }
    cout<< "Printing done" <<endl;


    // Declaration of different type
    bool firstBool[5];
    float firstfloat[8];
    double firstdouble[3];
    long firstlong[9];

    cout<< "Everything is Fine !!"<< endl;

    return 0;
}