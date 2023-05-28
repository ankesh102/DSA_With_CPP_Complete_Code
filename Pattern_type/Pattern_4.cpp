// Type 4
/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;

int main() 
{

    int n ;
    cout<< "Please enter the value :"<<endl;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        // int j = n;
        // while(j>=1)
        // {
        //     cout<< j << " ";
        //     j = j-1;
        // }
        // cout<< endl;
        // i = i + 1;
        int j = 1;
        while(j<=n)
        {
            cout<< n-j+1 << " ";
            j = j+1;
        }
        cout<<endl;
        i = i + 1;
    }


    return 0;

}