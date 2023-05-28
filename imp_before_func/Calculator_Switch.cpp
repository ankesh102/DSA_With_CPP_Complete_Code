// This part consist of calculator using switch case 

#include<iostream>
using namespace std;
 
int main()
{
 
    int a, b;

    cout<< "Please input first number " <<endl;
    cin>>a;

    cout<< "Please Input second Number : " <<endl;
    cin>>b;

    char op ; 
    cout<< "Please give input operator :" <<endl;
    cin>> op;

    switch( op )
    {
        case '+':
            cout<< "The addition of a and b is :" << (a+b) <<endl;
                break;
        case '-':
            cout<< "The difference between a and b is "<< (a-b)<< endl;
                break;
        case '*' :
            cout<< "The product of a and b is :" << (a*b) <<endl;
                break;
        case '/' : 
            cout<< "The division of a and b is :"<< (a/b) <<endl;
                break;
        case '%' :
            cout<< "The remainder left in a % b is " << (a%b) <<endl;
            break;
        default:
            cout<< "Your Opeartor is Still in learning progress : Thank You " <<endl;
    }

return 0;
}