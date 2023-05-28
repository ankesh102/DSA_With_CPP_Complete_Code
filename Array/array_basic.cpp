#include<iostream>
using namespace std;

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

    // Printing Entire array
    int n = 15; // Size of an array
    for(int i = 0; i < n; i++ ){
        cout<< "Value at " << i << " index is " << third[i] << endl;
    }

    // Next concept -> Initializing all location with 0 
    int fourth[10] = {0};
    int t = 10;
    for(int i = 0; i < t; i++ ){
        cout<< "Value at " << i << " index is " << fourth[i] << endl;
    
    }
    // Next concept -> Initializing all location with 0 ->  Not possible with below line
    int sixth[10] = {1};
    int t = 10;
    for(int i = 0; i < t; i++ ){
        cout<< "Value at " << i << " index is " << sixth[i] << endl;
    
    }

    // Next xoncept -> initialising all location  with any value rather then 0 -> done with this technique
    int fifth[10] = {};

    int val = 1;
    for(int i = 0; i<10; i++)
    {
        fifth[i] = val;
    }
    // Printing Entire array
    int m = 10; // Size of an array
    for(int i = 0; i < m; i++ ){
        cout<< fifth[i] << " " ;
    }

    cout<< "Everything is Fine !!"<< endl;

    return 0;
}