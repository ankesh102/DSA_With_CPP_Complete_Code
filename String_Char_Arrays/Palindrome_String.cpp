#include<iostream>
using namespace std;

// Function to check weather number is Palindrome or not
bool check_Palindrome( char name[], int n)
{
    int start = 0;
    int end = n - 1;
    // cout<< name[start];
    // cout<< name[end];
    while( start <= end )
    {
        if(name[start] == name[end])
        {
            start++;
            end--;
        } else {
            return false;
        }
    }
    return true;
}

int lengthName( char name[] )
{
    int count = 0;
    for( int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
 
int main()
{
    char name[30];
    cout<< " Please Enter the name : " << endl;
    cin>> name;

    int length = lengthName(name);
    cout<< length << endl;

    if(check_Palindrome(name, length))
    {
        cout<< "Given name is a Palindrome !! " << endl;
    }
    else {
        cout << "Not a Palindrome Name !!! " << endl;
    }



return 0;
}