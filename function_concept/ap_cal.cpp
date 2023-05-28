#include<iostream>
using namespace std;

// AP Calculator Functions 
int apCalc(int n)
{
    int calValue = (3*n) + 7;
    return calValue;
}

int main()
{
    int n;
    cout<< "Please input value of n : " << endl;
    cin>>n;

    int answer = apCalc(n);
    cout<< "The calculated value is : "<< answer << endl;
    return 0;
}