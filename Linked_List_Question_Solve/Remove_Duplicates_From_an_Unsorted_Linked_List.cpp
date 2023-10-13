// Function to remove duplicate node in an unsorted linked list


// Using map method : 
// Time Complexity : O(n) 
// Space COmplexity : O(n) - n - map used here 
/*
Node *removeDuplicates(Node *head)
{
    // Write your code here
    // Handle Empty List 
    if( head == NULL ) {
        return NULL ;
    }

    // Non-Empty List 
    unordered_map<int, bool> visited ; 
    Node* curr = head ; 
    Node* prev = NULL ;

    while(curr != NULL) {
        if( visited[curr -> data] != true ) {
            visited[curr -> data ] = true ;
            prev = curr ;
            curr = curr -> next ;
        } else {

        
        Node* next_point = curr -> next ;
        delete(curr) ;
        prev -> next = next_point ;
        curr = next_point ;
        }
        
    }

    return head ;
}
*/


/*
Node *removeDuplicates(Node *head)
{
    // Write your code here

    // if( head == NULL ) return NULL ;

    // Node* curr = head ; 

    // while( curr != NULL ) {
    //     Node* temp = curr ;

    //     while( temp -> next != NULL ) {
    //         if(curr -> data == temp -> next ->  data ) {

    //             Node* nodeToDel = temp -> next ; 
    //             Node* next_next = temp -> next -> next ;
    //             delete(nodeToDel) ;  
    //             temp -> next = next_next ;
    //         } else {
    //             temp = temp -> next ;
    //         }
    //     }
    //     curr = curr -> next ;
    // }

    // return head ; 

    // Cant able to pass large test cases 

    if( head == NULL ) return NULL ;

    Node* curr = head ;

    while( curr != NULL ) {
        Node* temp = curr ;

        while( temp -> next != NULL ) {
        if(curr -> data == temp -> next -> data ) {
            // Deleting duplicate node
            Node* deleteNode = temp -> next ;
            Node* temp_next = temp -> next -> next  ;
            delete(deleteNode) ;
            temp -> next = temp_next ;
        } else {
            temp = temp->next;
        }
        }

        curr = curr -> next ;
    }

    return head ; 


    /*
    // Solve using map function 
    // Handle Empty List 
    if( head == NULL ) {
        return NULL ;
    }

    // Non-Empty List 
    unordered_map<int, bool> visited ; 
    Node* curr = head ; 
    Node* prev = NULL ;

    while(curr != NULL) {
        if( visited[curr -> data] != true ) {
            visited[curr -> data ] = true ;
            prev = curr ;
            curr = curr -> next ;
        } else {

        
        Node* next_point = curr -> next ;
        delete(curr) ;
        prev -> next = next_point ;
        curr = next_point ;
        }
        
    }

    return head ;
}
    */