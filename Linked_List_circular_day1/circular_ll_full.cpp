#include<iostream>
#include<map>
using namespace std;

// Creating Node
class Node {
    public: 
        int data ;
        Node* next ;

    // Creating Constructor 
    Node(int d) {
        this -> data = d ;
        this -> next = NULL ;
    }

    // Creating Desturctor -> For deleting Node 
    ~Node() {
        int value = this -> data ;
        if(this -> next != NULL )
        {
            delete next ;
            this -> next = NULL ;
        }
        cout << "Memory is free for node with data value " << value << endl ; 
    }

} ;

// Insertion in circular linked list 
void insertNode(Node* &tail, int element, int data) 
{
    
    // Empty list 
    if( tail == NULL )
    {
        // Create new node 
        Node* newNode = new Node(data) ;
        tail = newNode ; 
        newNode -> next = newNode ;
    } else {
        // Non-Empty List 
        // Assuming that the element is present in the list 

        Node* curr = tail ; 
        // To reach to the element where we need to insert the data/new node 
        while(curr -> data != element)
        {
            curr = curr -> next ;
        }

        // Element mil chuka hai upar wala loop chalne ke baad 
        // Aur curr uske upar point kr rha hai 
        
        // New Node bana do 
        Node* temp = new Node(data) ;
        temp -> next = curr -> next ;
        curr -> next = temp ;

    }
}

// Traversal

void print(Node* &tail ) 
{
    Node* temp = tail ; 

    // empty list
    if( tail == NULL)
    {
        cout << "List is Empty " << endl ;
        return ;
    }

    do {
        cout << tail -> data << " " ;
        tail = tail -> next ;
    } while(tail != temp ) ;

    cout << endl ;
}

// Deletion in circular Linked List 

void deleteNode(Node* &tail, int value ) {
    
    // List is Empty 
    if( tail == NULL) 
    {
        cout << "List is Empty, Please check again !! " << endl ;
        return ; 

    } else {
        // Non empty list 

        // Assuming that value is present in the list 
        Node* prev = tail ;
        Node* curr = prev -> next ;

        while(curr -> data != value )
        {
            prev = curr ;
            curr = curr -> next ;
        }

        // Ab hm current pe pahuch gye hai aur element mul gye hai jisko dlt krni h

        // Pointer ko shi jagah pr point karani h 
        prev -> next = curr -> next ;

        // 1 Node Linked List 
        if(curr == prev )
        {
            tail = NULL ;
        }
        // if Node >= 2 then this will handle the tail 
        else if(tail == curr) {
            tail = prev ;
        }

        curr -> next = NULL ;
        // Now free the memory space 
        delete curr ;



    }
}

// Function to check if a linked list is circular or not 
bool isCircular(Node* head) {
    
    // Empty List 
    if( head == NULL ) return true ;

    // Handle case when Node >= 1 ;
    Node* temp = head ;
    while(temp != NULL && temp != head ) {
        temp = temp -> next ;
    }

    if(temp == head) {
        return true ;
    }
    return false ;
}

// Function to check if loop exist in a list or not 
bool detectLoop(Node* head) {

    // Empty list 
    if( head == NULL ) {
        return false ;
    }

    // Create a map to keep track of visited Node 
    map<Node*, bool> visited ; 

    // Create a temp node to keep track of visited node 
    Node* temp = head ; 
    while(temp != NULL )
    {
        // Check if visited visit's again means loop exist 
        if(visited[temp] == true)
        {
            cout << "Cycle present on element " << temp -> data << endl ;
            return true ; 
        }
        // Mark each node visited when we visit them for the first time 
        visited[temp] = true ;
        temp = temp -> next ;
    }

    return false ;
}


// Floyds Loop Detection Algorithms 
// This will return true or false 
bool floydDetectLoop( Node* head ) {

    // Empty List 
    if( head == NULL ) 
    {
        return false ;
    }

    // take slow and fast pointer concept 
    Node* slow = head ;
    Node* fast = head ; 

    while(fast != NULL && slow != NULL )
    {
        slow = slow -> next ;
        fast = fast -> next ;
        if(fast != NULL)
        {
            fast = fast -> next ;
        } 

        if(slow == fast )
        {
            return true ;
        }
    }

    return false ; // Because loop se bahar aa gye aur kch hua nhi mtlb lopp nhi hai 
}

// This will return node where slow and fast meet - Point of Intersection 
Node* floydDetectLoopNode( Node* head ) {

    // Empty List 
    if( head == NULL ) 
    {
        return head ;
    }

    // take slow and fast pointer concept 
    Node* slow = head ;
    Node* fast = head ; 

    while(fast != NULL && slow != NULL )
    {
        fast = fast -> next ;
        if(fast != NULL)
        {
            fast = fast -> next ;
        } 
        slow = slow -> next ;

        if(slow == fast )
        {
            cout << "Intersecction present at " << slow -> data << endl ;
            return slow ;
        }
    }

    return NULL ; // Because loop se bahar aa gye aur kch hua nhi mtlb lopp nhi hai 
}

// Function to get starting Node of a loop in Circular LL 
Node* getStartingNode( Node* head )
{
    if( head == NULL ) {
        return NULL ;
    }

    // To get intersection of node - slow and fast 
    Node* intersection = floydDetectLoopNode( head ) ;
    Node* slow = head ;

    while( slow != intersection ) {
        slow = slow -> next ;
        intersection = intersection -> next ;

    } 

    // As we came out of loop means slow meet with fast and return that node 
    return slow ; 
}

// Function Implementation to remove loop in a Linked List 

void removeLoop( Node* head ) 
{
    if( head == NULL ) {
        return ;
    }

    Node* startingNode = getStartingNode( head ) ;
    Node* temp = startingNode ;

    while( temp -> next != startingNode )
    {
        temp = temp -> next ;
    }

    temp -> next = NULL ;
    cout << "Loop has been removed " << endl ;
}


 
int main()
{
    Node* tail = NULL ;

    // Case -> Empty Linked list me insert krre h - Yaha pr 5 ka koi mtlb nhi bnta jaise LL to empty hai
    insertNode(tail, 5, 3) ; 
    print(tail) ;

    insertNode(tail, 3, 5) ;
    print(tail) ;

    insertNode(tail, 3, 7) ;
    print( tail ) ;

    // deleteNode(tail, 7) ;
    // print(tail) ;

    // deleteNode(tail, 3) ;
    // print(tail) ;

    // deleteNode(tail, 5) ;
    // print(tail) ;

    // // List become empty here 
    // deleteNode(tail, 6) ;
    // print(tail ) ;

    // deleteNode(tail, 8) ;
    // print(tail ) ;

    // Function call to check list is circular or not 
    if(isCircular(tail)) {
        cout << "Given Linked List is Circular !! " << endl ;
    } else {
        cout <<" Given linkedlist is NOT a Circular one !" <<endl;
    }

    if(detectLoop(tail)) {
        cout << "Given Linked List contains LOOP !! " << endl ;
    } else {
        cout <<" Given linkedlist is NOT containing a loop !" <<endl;
    }

    if(floydDetectLoop(tail)) {
        cout << "Given Linked List satisfied  floydDetectLoop !! " << endl ;
    } else {
        cout <<" Given linkedlist is NOT satisfied floydDetectLoop   !" <<endl;
    }

    cout << "Starting Node is " << getStartingNode( tail ) -> data << endl ;
    print( tail ) ;

    // Function call to remove loop 
    removeLoop(tail);
    // print(tail) ;

    if(floydDetectLoop(tail)) {
        cout << "Given Linked List satisfied  floydDetectLoop !! " << endl ;
    } else {
        cout <<" Given linkedlist is NOT satisfied floydDetectLoop   !" <<endl;
    }
    cout << " Hello"  << endl ;


    return 0;
}