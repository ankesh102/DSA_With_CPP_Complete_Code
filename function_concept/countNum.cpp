#include<iostream>
using namespace std;

// printCount Function which print all counting numbers upto n
void printCount(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout<< "The "<<i<<"st number is "<< i << endl;
    }
}

int main()
{

    int n;
    cout << "Please input the value of n : " << endl;
    cin >> n;

    cout << "Print Count Upto N are as follows : " << endl;
    // Function call
    printCount(n);

    return 0;
}