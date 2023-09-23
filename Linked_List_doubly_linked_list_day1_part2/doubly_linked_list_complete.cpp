#include<iostream>
using namespace std;

// Creating Node 
class Node {
    public: 
        int data ;
        Node* prev ;
        Node* next ;


        // Creating Constructor 
        Node(int data)
        {
            this -> data = data ;
            this -> prev = NULL ;
            this -> next = NULL ;
        }

        // Writing Destructor to free up the memory space 
        ~Node() 
        {
            int value = this -> data ; 

            if( next != NULL )
            {
                delete next ;
                next = NULL ; 
            }
            cout << "Memory free for node with data " << value << endl ; 
        }
}; 


// Function to print the linked list  -> traverse a linked list 
void print(Node* &head) 
{
    Node* temp = head ; 

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next ;
    }
    cout << endl ;
}

// Function to get length of a linked list 
int getLength(Node* &head)
{
    Node* temp = head ;
    int len = 0 ;

    while(temp != NULL)
    {
        len++ ;
        temp = temp -> next ;
    }
    return len ; 
}

// Insertion 
// Function to insert new node at head 

void insertAtHead( Node* &head, Node* &tail, int data)
{

    // Empty list - When no node are present initially 
    if(head == NULL)
    {
        Node* temp = new Node(data) ;
        head = temp ; 
        tail = temp ;
    } else {
        // Creating new node 
        Node* temp = new Node(data) ;
        temp -> next = head ;
        head -> prev = temp ;
        head = temp ;
    }
}

// Inserting node from tail 
void insertAtTail( Node* &tail, Node* &head, int data)
{
    if(tail == NULL)
    {
        Node* temp = new Node(data) ;
        tail = temp ; 
        head = temp ;
    } else {
        // Step - 1 : Crerating a new node which needs to be insert 
        Node* temp = new Node(data) ;
        tail -> next = temp ;
        temp -> prev = tail ; 
        tail = temp ; 
    }

}

// Inserting Node at any Position 
void inserAtAnyPosition( Node* &head, Node* &tail, int position, int data )
{

    // Insert at start 
    if(position == 1)
    {
        insertAtHead(head,tail,  data) ;
        return; 
    }

    Node* temp = head ;
    // Create count to keep track of position where we want to insert the node
    int cnt = 1 ;

    while( cnt < position-1 ) 
    {
        temp = temp -> next ;
        cnt++ ;

    }

    // Inserting at last position 
    if( temp -> next == NULL)
    {
        insertAtTail(tail,head,  data ) ;
        return ; 
    }

    // Code to insert node at any position 
    // Crrating a new node
    Node* nodeToInsert = new Node(data) ;

    // Pointing pointer to their correct position 
    nodeToInsert -> next = temp -> next ;
    temp -> next -> prev = nodeToInsert ;
    temp -> next = nodeToInsert ;
    nodeToInsert -> prev = temp ;
     
}

// Deletion in Doubly Linked List 
void deleteNode( int position , Node* &head, Node* &tail )
{
    // deleting startting node / First node 
    if( position == 1)
    {
        Node* temp = head ; 
        temp -> next -> prev = NULL ;
        head = temp -> next ;
        temp -> next = NULL ;
        delete temp ;
    } else {
        // deleting middle or any last node 
        Node* curr = head ;
        Node* prev = NULL ;

        int cnt = 1 ;
        while( cnt < position)
        {
            prev = curr ;
            curr = curr -> next ;
            cnt++ ;
        }

        curr -> prev = NULL ;
        // Handling tail case when last node we are deleting 
        if(curr -> next == NULL)
        {
            tail = prev ;
        }
        prev -> next = curr -> next ; 
        curr -> next = NULL ;
        delete curr ;
    }


}

 
int main()
{
    // Creating First node 
    // Node* node1 = new Node(10) ;
    // Node* head = node1 ; // Head Pointer 
    // Node* tail = node1 ; 

    // Agar hm yaha pr ek node nhi banate aur hmari LL empty hoti 

    Node* head = NULL;
    Node* tail = NULL;


    // Printing Linked List ater creating first node 
    // print(head) ; 

    // Execute the function to get length of a linked list 
    // cout << "Length of linked List " << getLength(head) << endl ;

    // Head Insertion : Function call to insert new node at head 
    insertAtHead(head,tail,  14) ;

    // Print linked list after insering first node at head node 
    print(head) ;
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;

    // Inserting some more node at beg/Head 
    insertAtHead(head,tail,  16) ;
    print(head) ;
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;
    insertAtHead(head,tail,  18) ;
    print(head) ;
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;
    insertAtHead(head,tail,  20) ;
    print(head) ;
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;


    // Tail Insertion : Function call to insert new node at end/ Tail .
    insertAtTail( tail,head,  99 ) ;
    // Print Linked List after inserting element from tail
    print( head ) ;
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;


    // Now insert node at any position dunction call
    inserAtAnyPosition( head, tail, 2, 100) ;
    // Print Linked list after inserting at any position 
    print(head) ;
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;

    inserAtAnyPosition(head, tail , 1, 101) ;
    print(head) ;
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;

    inserAtAnyPosition(head, tail , 8, 102) ;
    print(head) ;
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;

    // Function call to delete any node in doubly linked list 
    deleteNode(3, head , tail) ; 
    print(head ) ; 
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;

    deleteNode(1, head ,tail) ; 
    print(head ) ; 
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;

    deleteNode(6, head ,tail) ; 
    print(head ) ; 
    cout<< "head  " << head -> data << endl ;
    cout<< "tail  " << tail -> data << endl ;







    return 0;
}