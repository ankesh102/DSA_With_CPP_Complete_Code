#include<iostream>
using namespace std;

int main() 
{
    // int a;
    // cin>>a;

    // cout<< "The value of a "<< a << endl;

    // If A is Positive.
    // if(a>0){
    //     cout<<"A is positive"<< endl;
    // } else {
    //     cout<<" A is Negative "<< endl;
    // }

    // int a , b;

    // cin>> a >> b ;

    // a = cin.get();

    // cout<<"The value of a and b is : "<<a <<" "<< b << endl;

    // cout<< " The value of A is "<< a << endl;


    // int a , b;
    
    // cout<< "Enter the value of A "<< endl;
    // cin>>a;
    // cout<< "Enter the value of B : "<< endl;
    // cin>>b;

    // if(a>b){
    //     cout<<"A is greater ";

    // } 
    // if (b>a) {
    //     cout<< "B is greater";
    // }


    // int a = 2;
    // int b = a+1;

    // if((a=3)==b) {
    //     cout<<a;

    // } 
    // else if (a = b){
    //     cout<<"A is Greater";
    // } 
    // else {
    //     cout<<a + 1;
    // }


    // char a;
    // cout<<"Please enter your value : "<<endl;
    // cin>>a;

    // if(a >= 'A' && a <= 'Z'){
    //     cout<<" A is in UpperCase"<< endl;
    // }
    //  else if (a >= 'a' && a <= 'z'){
    //     cout<< "A is in Lowercase" <<endl;
    //  }
    //  else {
    //     cout<< "A is number"<<endl;
    //  }



    // Print first n numbers 

    // int n;
    // cout<< "Please Enter the value : "<<endl;
    // cin>>n;

    // // int i = 1;
    // // while(i <=n){
    // //     cout<< " The Value of" <<i<<" is :" << i << endl;
    // //     i = i+1;
    // // }

    // for(int i = 0; i<=n; i++)
    // {
    //     cout<< "The value of i is "<<i<<endl;
    // }


    // int n ;
    // cout<< "Please inpute Value : "<<endl;
    // cin>>n;

    // int i = 1;
    // int sum = 0;

    // while (i <= n) {
    //     sum = sum + i;
    //     i = i + 1;
    // }
    // cout<< "The value of sum is "<< sum <<endl;


    // Task 
    // Find sum of even Number 

    // int n;
    // cout<< "Please Input Value" << endl;
    // cin>>n;

    // int i = 2;
    // int sum =0;

    // while(i<=n){
    //     sum = sum + i;
    //     i = i + 2;
    // }

    // cout<< "The sum of even number is "<< sum << endl;


    // Task 2 

    // convert celcius to farenheit 

    // int c;
    // cout<< "Please enter temprature in o^C :"<<endl;
    // cin>>c;

    // int f;
    // f = (c * 9 / 5) + 32;
    // cout<< " The value of temprature in F is "<< f << endl;

    // Task 

    // Check whether given number is prime or not 

    int n ;
    cout<< "Please enter the value of n "<< endl;
    cin>>n;

    // int i = 2;

    // while(i < n) 
    // {
    //     if( n % i ==0 )
    //     {
    //         cout<< "Not a Prime "<< endl;
    //         return 0;
    //     }
    //     i = i + 1;
    // }
    // cout<< " prime "<<endl;


    int i = 2 ;
    int mid = 0;
    int count = 0;

    while (i <= n/2){
        if(n%i ==0) 
        {
            count++;
            break;
        }
        i = i + 1;
    }

    if(count != 0){
        cout<< "Not a Prime"<<endl;
    } 
    else {
        cout<<"prime "<<endl;
    }
    return 0;

}