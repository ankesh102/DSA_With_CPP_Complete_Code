#include<iostream>
using namespace std;

// Function declareation to find num is even or odd

// Even - 1
// Odd - 0
int  isEven(int num)
{
    if(num&1)
    {
        return 0;
    }

    return 1;
}

int main()
{
    int num;
    cout << "Please input your number : "<<endl;
    cin>> num;

    if(isEven(num))
    {
        cout<< "Number is Even !!"<<endl;
    } else {
        cout<< "Number is odd !!"<< endl;
    }

    return 0;
}