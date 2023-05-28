// This code include logic to convert negative decimal number into binary

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Give Input : " << endl;
    cin >> n;

    int ans = 0;
    int i = 0;

    if (n < 0)
    {
        n = n * (-1);
        while (n != 0)
        {
            
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;

            n = n>>1;
            i++;

        }
        ans = (~ans);
        int updated_ans = ans + 1;
        cout<< "Answer of Negative Decimal Number is : "<< updated_ans <<endl;
        
    }
    else{
        while(n != 0)
        {
            int bit = n & 1;
            ans = ( bit * pow(10,i) + ans);

            n = n >> 1;
            i++; 
        }
        cout<< "Answer of Positive Negative Number is " << ans <<endl;
    }

    return 0;
}