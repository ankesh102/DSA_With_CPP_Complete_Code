// Type 9

/*
1 
2 3
3 4 5
4 5 6 7
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the value :"<<endl;
    cin>>n;

    int i = 1;
    
    // while(i <= n)
    // {
    //     int j = 1;
    //     int val = i;
    //     while(j <= i)
    //     {
    //         cout<< val;
    //         val++;
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }


        // Method 2

    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout<< i + j - 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }

    return 0;
}