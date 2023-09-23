#include<iostream>
using namespace std;

// Creating Node 
class Node {

    public: 
        int data ;
        Node* next ;

        // Creating constructor -> Whenever object c reated it gets called automatically 
        Node(int data)
        {
            this -> data = data ;
            this -> next = NULL ; 
        }

        // Creating destructor to free up the space of node when we delete that node
        ~Node() {
            int value = this -> data ;
            // Free up the memory space 
            if(this -> next != NULL)
            {
                delete next ;
                this -> next = NULL ;
            }
            cout << " Memory is free with node having data " << value << endl ;
        }

};


// Function to insert at begining of linked list 
void insertAtHead(Node* &head, int data) 
{
    // Create New Node 
    Node* temp = new Node(data) ;
    temp -> next = head ; 
    head = temp ; 

}

// Function to insert at end of a linked list 
void insertAtTail (Node *&tail , int data )
{
    // Create a new node 
    Node* temp = new Node(data) ;
    tail -> next = temp ;
    tail = temp ; 
}

// Function to insert at any position of linked list 
void inserAtAnyPos(Node* &tail, Node* &head, int position, int data)
{

    // To handle position = 1 because it will work after getting pre processor 
    // So To hanlde that 
    if(position == 1)
    {
        insertAtHead(head, data) ;
        return ; 
    }

    Node* temp = head ; 
    int cnt = 1 ; // We are always at start node means count = 1 

    // This loop we traverse till one place less then the position where we awant to insert out new node 
    while(cnt < position - 1)
    {
        temp = temp -> next ; 
        cnt++ ;
    }

    // Inserting at end -> To handle this case we need to update tail also
    if(temp -> next == NULL)
    {
        insertAtTail(tail, data) ;
        return ; 
    }

    // Creating a new node to insert data 
    Node* nodeToInsert = new Node(data) ;

    nodeToInsert -> next = temp -> next ;

    temp -> next = nodeToInsert ;

}

// Function to traverse the linked list and print all data of linked list 
void print(Node* &head)
{
    Node* temp =  head ;

    while( temp != NULL)
    {
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl ;
}


// Function to delete the node at any position 
void deleteNode( int position, Node* &head, Node* &tail)
{
    // Handle first or start position we want to delete 
    if(position == 1)
    {
        Node* temp = head ;
        head = head -> next ;
        // free up the memory of start node 
        temp -> next = NULL ;
        delete temp ;

    } else{
        // Handle middle or end position we want to delete 

        Node* curr = head ;
        Node* prev = NULL ;

        int cnt = 1 ; // we are at first node
        while( cnt < position ) // Here if we pass <= then it move one pleace ahead in case of all except first place
        {
            prev = curr ;
            curr = curr -> next ;
            cnt++ ;
        }

        

        prev -> next = curr -> next ;
        // Handling tail case when last node we are deleting 
        if(curr -> next == NULL)
        {
            tail = prev ;
        }
        
        // free up the memory space 
        curr -> next = NULL ;
        delete curr ;

    }
}

 
int main()
{

    Node* node1 = new Node(10) ;
    // cout << node1 -> data << endl ;
    // cout << node1 -> next << endl ;

    // Create a head pointer and pointed to node1 created above 
    Node* head = node1 ;

    // Create a tail pointer that point to end of a node in linked list .
    Node* tail = node1 ; // Kyuki jb ek hi node ho to head aur tail dono usi ko point krenge  

    // // Print linked list before insertion 
    // print(head) ;

    // // Insert new node at beginning
    // insertAtHead(head, 14) ;

    // // Print linkedlist after insertion 
    // print(head) ;

    
    // Printing before tail insertion 
    print(head) ;
    // InsertAtTail -> Linked list ki last me ye node insert karega 
    insertAtTail(tail, 40) ; 

    // Print after inserting from Tail 
    print(head) ; 

    // InsertAtTail -> Linked list ki last me ye node insert karega 
    insertAtTail(tail, 80) ; 

    // Print after inserting from Tail 
    print(head) ; 

    // InsertAtTail -> Linked list ki last me ye node insert karega 
    insertAtTail(tail, 90) ; 

    // Print after inserting from Tail 
    print(head) ; 

    // Insert at any position 
    inserAtAnyPos(tail, head, 3, 55) ;

    // Printing after inserting at any position 
    print(head) ;

    // Insert at any position 
    inserAtAnyPos(tail, head, 1, 100) ;

    // Printing after inserting at any position 
    print(head) ;

    // To verify the statement whether our head and tail is at right position or not
    cout << "Head " << head -> data << endl ;
    cout << "Tail " << tail -> data << endl ;

    // To delete the node we need to call delete function and pass position and head
    deleteNode(6, head, tail) ;

    //Print linked list after deleting the node 
    print(head) ;

    // To verify the statement whether our head and tail is at right position or not
    cout << "Head " << head -> data << endl ;
    cout << "Tail " << tail -> data << endl ;





return 0;
}