// Implementation of Binary Tree 

// We are going to implement binary tree using recursion

#include<iostream>
#include<queue>
using namespace std;

// node creation for tree D.S
class node {
    // Data Members 
    public: 
        int data ;
        node* left ;
        node* right ; 

    node(int d) {
        this -> data = d ;
        this->left = NULL ;
        this->right = NULL ;
    }
};

// Function to create and build tree 
node* buildTree( node* root ) {

    cout << "Enter the data : " << endl ;
    int data ;
    cin >> data ;

    root = new node(data) ; 

    if( data == -1 ) {
        return NULL ;
    } 

    cout << "Enter data for inserting in left " << data << endl ;
    root -> left = buildTree( root -> left ) ;

    cout << "Enter data for inserting in right " << data <<  endl ;
    root -> right = buildTree( root -> right ) ;

    return root ; 

}

// Par hme to tree ko tree jaisa dikhane ki iksha hai wo hm kaise kr paynge 

// Level order traversal 

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}


// Build Tree from Level order Traversal 
void buildTreeFromLevelOrder(node* &root) {
    // we have to use queue 
    queue<node*> q ;
    cout << "Enter the data for root : " << endl ;
    int data ;
    cin>> data ;
    root = new node(data) ;
    q.push(root) ;

    while(!q.empty()) {
        node* temp = q.front() ;
        q.pop() ;

        cout << "Enter left node for : " << temp -> data << endl ;
        int leftData ;
        cin >> leftData ; 
        if( leftData != -1 ) { // mtlb  NULL nhi h
            temp -> left = new node(leftData) ;
            q.push( temp -> left ) ;
        }

        cout << "Enter right node for : " << temp -> data << endl ;
        int rightData ; 
        cin >> rightData ; 

        if( rightData != -1 ) {
            temp -> right = new node(rightData) ;
            q.push(temp -> right) ;
        }
    }
}

 
int main()
{

    node* root = NULL ; 

    buildTreeFromLevelOrder(root) ;
    levelOrderTraversal(root) ;

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    /*
    // Creating a tree 
    root = buildTree( root ) ;

    // data -> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // Level order trversal 
    cout << "Printing the level order traversal output : " << endl ; 
    levelOrderTraversal( root ) ;
    */

    return 0;
}