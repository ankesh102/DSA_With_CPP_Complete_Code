/*
Pattern 20

* * * *
* * *
* *
*

*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Please give input : "<<endl;
    cin>>n;

    int i = 1;
    while(i <= n) {
        int j = 1;
        int c = n - i + 1;
        while(j<=c){
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }

}