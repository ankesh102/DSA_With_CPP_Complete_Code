// #include<iostream>
// using namespace std;

// void printCounting( int n )
// {
//     if(n == 0) return;

//     cout << n << " "; // Print 5 4 3 2 1

//     printCounting(n - 1) ;

//     cout << n << " "; // Print 1 2 3 4 5
// }
 
// int main()
// {

//     int n;
//     cout << "Enter value of n :" << endl; 
//     cin>>n; 

//     printCounting(n) ;



// return 0;
// }




#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {

    int ans = 1;
    for(int i = 0; i<30; i++)
    {
        
        if(ans == n)
        {
            return true;
        }
        if(ans <= INT_MAX/2)
        {
            ans = ans * 2;
        }
        cout<< ans;
    }

    return false;
    
}
 
int main()
{

    int n;
    cout<<"Please input the value of n : " << endl;
    cin>>n;

    if(isPowerOfTwo(n))
    {
        cout << "True" ;
    } else {
        cout<< "False" ;
    }



return 0;
}