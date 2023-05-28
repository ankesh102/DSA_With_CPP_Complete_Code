// Here we code all 4 bitwise opeartor and learn How it actually works

#include<iostream>
using namespace std;

int main()
{
    // int a = 4 ;
    // int b = 6 ;

    // Bitwise Opeartor Example 
    // cout<< " a&b " << (a&b ) <<endl;
    // cout<< " a|b " << (a|b) <<endl;
    // cout<< " ~a " << ~a <<endl;
    // cout<< " a^b " << (a^b) <<endl;


    // Left and Right shift Operator 

    // cout<< "Right Shift " << (17>>1) <<endl;
    // cout<< "Right Shift " << (17>>2) <<endl;

    // cout<< "Left Shift " << (19<<1) <<endl;
    // cout<< "Left Shift " << (21<<2) <<endl;


    // Increment / Decrement Operator 

    // int a = 4 ;
    // cout<< "Post Incre " << a++ <<endl;
    // cout<< "Pre Incre " << ++a <<endl;
    // cout<< "Post Decre " << a-- <<endl;
    // cout<< "Pre Decre " << --a <<endl;

    //Question Practice
    // int num = 3;
    // cout<< (25 * (++num))<<endl;

    //For Loop Working 

    // int n;
    // cout<< "Please enter the value of n : "<<endl;
    // cin>>n;

    // for(int i = 1; i <= n; i++)
    // {
    //     cout<< i <<endl;

    // }

    //  Another method to write For Loops 
    // int i = 1;
    // for(; ; )
    // {
    //     if(i <= n){
    //     cout<< i <<endl;
    //     }
    //     else {
    //         break;
    //     }
    //     i++;
    // }

    // For Loop with Multiple Conditions 

    // for(int a=0, b= 1, c=2; a>=0  && b>=1 && c>=2; a--,b--,c--)
    // {
    //     cout<< a << " " << b << " " << c << endl;

    // }

    // For Loop for finding the sum of all number till n

    int n;
    cout<< "Enter the value of n "<<endl;
    cin>>n;

    int count = 0;
    for(int i = 1; i<=n ; i++)
    {
        count = count + i ;
        
    }
    cout<< "The sum from 1 to n is : "<< count << endl;


}