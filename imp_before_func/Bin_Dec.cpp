// In this code we are going to learn how to write logic to convert binary into decimal

#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{

    int n;
    cout<< "Give Input : "<<endl;
    cin>>n;

    int i = 0;
    int ans = 0;

    while(n != 0)
    {
        int digit = n%10;

        if( digit == 1)
        {
            ans = ans + pow(2, i);

           
        }
        n = n/10;
         i++;
    }
    cout<< "Final answer is : "<< ans << endl;

return 0;
}