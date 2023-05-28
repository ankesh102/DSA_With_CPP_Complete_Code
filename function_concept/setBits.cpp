#include<iostream>
using namespace std;

// Function setBits 
int setBits(int a, int b)
{
    int ans = 0;
    for(int i = 0; a > 0; i++)
    {
        int uttar = a;
        if(uttar&1){
            ans++;
            a = a>>1;
        } else {
            a = a>>1;
        }

    }
    for(int i = 0; b > 0; i++)
    {
        int uttar = b;
        if(uttar&1){
            ans++;
            b = b>>1;
        } else {
            b = b>>1;
        }
    }
    return ans;
}

int main()
{
    int a, b;
    cout<< "Please enter value of a & b : " << endl;
    cin>> a >> b;

    int ans = setBits(a, b);
    cout<< "The ans is : "<< ans << endl;

    return 0;

}