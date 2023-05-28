// // Prime Number Checking by using FOR Loop

// #include<iostream>
// using namespace std;
 
// int main()
// {

//     int n;
//     cout<< "Please input number to check weather it is prime or not ? "<<endl;
//     cin>>n;

//     bool isPrime = 1;

//     for(int i = 2; i<n; i++)
//     {
//         //rem = 0, Not a prime  
//         if(n%i == 0)
//         {
//             // cout<< "Not a Prime";
//             isPrime = 0;
//             break;
//         }
            
//     }
//     if(isPrime == 0)
//     {
//         cout<< "Not a Prime Number "<<endl;
//     } else {
//         cout<< "Prime Number "<<endl;
//     }

// return 0;
// }


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>> n;

    int isPrime = 1;

    for(int i=2; i<n; i++)
    {
        if(n%i==0){
            isPrime += 1; 

        }
        i++;
    }
    if(isPrime == 1){
        cout<< "Prime Number "<<endl;
    }
    else {
        cout<< "Not a prime numberr";
    }
    return 0;
}

