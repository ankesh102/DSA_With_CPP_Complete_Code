#include<iostream>
using namespace std;
 
int main()
{

    int n;
    cout<<"Please Give input : "<<endl;
    cin>>n;

    int i = 1 ;

    while(i <= n) 
    {
        int j = 1;
       
        while( j <= n)
        {
            char d = 'A' + j - 1;
            if(i%2== 0)
            {
                cout<<d ;
                j++;
            }
            else {
                cout<<"*";
                j++;
            }
        }

        
        cout<<endl;
        i = i+1;
    }



return 0;
}