#include<iostream>
using namespace std;

// Recursive function to print counting 
int printCounting(int n)
{
    //Base Case 
    if (n == 0)
    {
        return 0;
    }


    printCounting(n-1);
    cout<< n << " ";

}
 
int main()
{

    int n;

    cout << "Please enter the value of n from where we want to print counting : "<< endl;
    cin >> n;


    cout<< "Counting number till n is as printed below : " <<  endl;
    printCounting(n);

return 0;
}