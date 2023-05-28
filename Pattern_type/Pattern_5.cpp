// Type 5
/*
1 2 3 
4 5 6 
7 8 9
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<" Please Enter Value :"<<endl;
    cin>>n;

    int i = 1;
    int sum = 0;
    while(i<=n)
    {
        int j = 1;
        
        while(j<=n)
        {
            sum = sum+1;
            cout<<sum << " ";
            j =  j + 1;
        }
        cout<<endl;
        i = i+1;
    }
    return 0;
}