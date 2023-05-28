/*

_ _ _ 1 _ _ _
_ _ 1 2 1 _ _
_ 1 2 3 2 1 _
1 2 3 4 3 2 1

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Please provide input : "<< endl;
    cin>>n;

    int i = 1;
    while(i <= n)
    {
        //Space first triangle
        int space = n - i;
        while(space)
        {
            cout<< " ";
            space = space - 1;

        }

        // Print Second triangle Numeeric Value 
        int j = 1;
        while(j<=i)
        {
            cout<<j;
            j = j + 1;
        }

        // Print third triangle Numeric Value

        int start = i - 1;
        while(start)
        {
            cout<< start;
            start = start - 1;
        }

        cout<<endl;
        i = i + 1;
    }
}