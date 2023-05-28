/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/

#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<< "Please provide input ";
    cin>>n;

    int i = 1;
    while(i <= n)
    {
        // 1 triangle
        int j = 1;
        int c = n - i + 1;
        while(j <= c)
        {
            cout<< j ;
            j = j + 1;
        }


        // 2 Triangle
        int start = i - 1;
        while(start)
        {
            cout<<"*";
            start = start - 1;
        }

        // 3 Triangle 
        int third = i - 1;
        while(third)
        {
            cout<<"*";
            third = third - 1;
        }

        // 4 traingle 

        int fourth = n-i+1;
        while(fourth)
        {
            cout<<fourth;
            fourth = fourth - 1;
        }



        cout<<endl;
        i = i + 1;
    }
}