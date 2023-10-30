#include<iostream>
#include<deque>
using namespace std;
 
int main()
{
    // create doubly ended queue  using STL 
    deque <int> dq;

    // Push operation 
    dq.push_front(12) ;

    dq.push_back(16) ;

    cout << " Front " << dq.front() << endl ;
    cout << " back " << dq.back() << endl ;

    dq.pop_front() ;

    cout << " Front " << dq.front() << endl ;
    cout << " back " << dq.back() << endl ;

    dq.pop_back() ;

    cout << " Front " << dq.front() << endl ;
    cout << " back " << dq.back() << endl ;

    // Check deque is empty or not 
    if (dq.empty()) {
        cout<<"Deque is Empty\n";
    }else {
        cout<<"Deque is not Empty\n";
    }

    


return 0;
}