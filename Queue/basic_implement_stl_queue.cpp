#include<iostream>
// Include a queue header file
#include<queue>
using namespace std;
 
int main()
{

    // Create a queue 
    queue<int> q ;

    // Push operation 
    q.push(11) ;
    cout << "First element of the Queue is: "<<q.front()<<endl;

    q.push(17) ;
    cout << "Second element of the Queue is: "<<q.back()<<endl;

    q.push(20) ;

    // Pop operation 
    q.pop() ;

    // To get size of queue 
    cout << "The size of the queue is : " << q.size() << endl ;

    // Check weather queue is empty or not 
    if(q.empty()) {
        cout << " Queue is empty !! " << endl ;
    } else {
        cout << " Queue is not empty !!! " << endl ;
    }
 

return 0;
}