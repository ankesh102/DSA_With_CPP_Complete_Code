#include<iostream>
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

    deleteNode(tail, 7) ;
    print(tail) ;

    deleteNode(tail, 3) ;
    print(tail) ;

    deleteNode(tail, 5) ;
    print(tail) ;

    // List become empty here 
    deleteNode(tail, 6) ;
    print(tail ) ;

    deleteNode(tail, 8) ;
    print(tail ) ;

    return 0;
}