/*
1 2 3 4 
  2 3 4 
    3 4
      4
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please provide input : "<<endl;
    cin>>n;

    int i = 1;
    while(i <= n)
    {
        //space
        int space = i - 1;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }


        // numeric value
        int j=i;
        // int c = n - i + 1;
        // int t = i;
        while(j <= n)
        {
            
            cout<<j;
            // t++;
            j = j + 1;
        }
        cout<<endl;
        i = i+1;
    }
}