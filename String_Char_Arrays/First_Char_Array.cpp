#include<iostream>
using namespace std;

// Function to find length of an Array
int getLength( char name[] ) 
{
    int count = 0;
    for( int i = 0 ; name[i] != '\0' ; i++ )
    {
        count++;
    }
    return count;
}
 
int main()
{

    char name[20]; 
    cout<< "Please Enter Your Name :  " << endl;
    cin >> name;

    cout << "The enetered name is : " << name << endl;
    
    cout << "Length of Array is : " << getLength(name) << endl; 



return 0;
}