#include<iostream>
using namespace std;

// Function Which reverses the string 
void reverseString( char name[] , int n ) 
{
    int s = 0;
    int e = n -1;
    while( s < e )
    {
        swap(name[s++], name[e--]);
    }
}

// Function to find length of a name 
int lengthOfName( char name[] )
{
    int count = 0; 
    for( int i = 0; name[i] != '\0' ; i++) 
    {
        count ++ ;
    }
    return count ;
}
 
int main()
{
    char name[20] ;

    cout<< " Please Enter Your Name : " << endl;

    cin >> name ;

    int length = lengthOfName(name);
    
    cout<< "The correct String is : " <<name << endl;

    reverseString(name, length);

    cout<< "The Reverse String is : " << name << endl;

return 0;
}