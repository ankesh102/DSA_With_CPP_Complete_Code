// Type 14
/*
A B C
B C D
C D E
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while(j<=n)
    //     {
    //         char a = 'A' + i + j - 2;
    //         cout<< a << " ";
    //         j = j + 1;

    //     }

    //     cout<< endl;
    //     i = i + 1;

    // }

    while(i<=n)
    {
        int j = 1;
        char start = 'A' + i -1;
        while(j<=n)
        {
            cout<<start<< " ";
            start = start + 1;
            j = j + 1;

        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}