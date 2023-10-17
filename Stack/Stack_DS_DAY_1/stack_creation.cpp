#include<iostream>
#include<stack>
using namespace std;
 
int main()
{

    // Stack creation using STL 
    stack<int> s ;

    // push operation
    s.push(7) ;
    s.push(8) ;


    // pop operation 
    s.pop() ;

    // peak element 
    cout << "Printing top most element in a stack " << s.top() << endl;

    // Check stack is empty or not 
    if(s.empty()) {
        cout << "Stack is empty !!! " << endl ;
    } else {
        cout << "Stack is not empty !!! " << endl ;
    }




return 0;
}