#include <iostream>
using namespace std;

// Function declaration
// 0 -> Not a Prime 
// 1 -> Prime 
bool isPrime(int num)
{

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int n;
    cout << "Please input your number : " << endl;
    cin >> n;

    if( isPrime(n)){
        cout<< "Is a Prime Number !!!"<<endl;
    } else {
        cout<< "Not a Prime Number !!!"<< endl;
    }

    return 0;
}