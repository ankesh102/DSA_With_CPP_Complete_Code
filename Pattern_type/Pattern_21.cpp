/*
* * * *
  * * *
    * *
      * 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Please provide input : "<<endl;
    cin>>n;

    int i = 1;
    while(i <= n)
    {
        // Space
        int space = i-1;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        // Star
        int j = 1;
        int c = n - i + 1;
        while(j<=c)
        {
            cout<< "*";
            j = j + 1;

        }
        cout<<endl;
        i = i + 1;

    }


    return 0;
}