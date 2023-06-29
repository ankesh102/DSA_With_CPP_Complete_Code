#include<iostream>
using namespace std;



char getMaxOccChar (string s) 
{

    int arr[26] = {0} ; // Initializing an array of size 26 to store count of an character


    // Create an array of count of characters
    for( int i = 0; i < s.length(); i++) 
    {
        char ch = s[i];
        int num = 0;
        // To handle lower case 
        if ( ch >= 'a' && ch <= 'z')
        {
            num = ch - 'a'; 
        }
        // To handle Upper case 
        else 
        {
            num = ch - 'A' ;
        }
        arr[num]++;
    }

    int max = -1, ans = 0;
    for( int i = 0; i < 26; i++)
    {
        if(max < arr[i])
        {
            ans = i; 
            max = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;

}
 
int main()
{

    string name;
    cin >> name;

    cout<< getMaxOccChar(name) << endl;



return 0;
}