/*
_ _ _ 1
_ _ 2 3
_ 4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Please provide input "<<endl;
    cin>>n;

    int i = 1;
    int count = 1;
    while(i<=n)
    {
        //space
        int space = n - i;
        while(space)
        {
            cout<< " ";
            space = space - 1;

        }

        // Value Numeric
        int j = 1;
        while(j <= i)
        {
            cout<< count;
            count++;
            j = j + 1;
        }
        cout<< endl;
        i = i + 1;
    }
}