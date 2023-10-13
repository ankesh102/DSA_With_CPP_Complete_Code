// Function to implement mergeSort in linked list 

// Function to find midNode of Linked list 

/*
node* findMid(node* head ) {
    node* slow = head ;
    node* fast = head -> next ; 

    while(fast != NULL &&  fast -> next != NULL ) {
        fast = fast -> next -> next ;
        slow = slow -> next ;
    }

    return slow ;
}

// function to find head node of merged linked list 
node* merge(node* left, node* right) {

    if( left == NULL ) {
        return right ;
    }

    if( right == NULL ) {
        return left ;
    }

    node* ans = new node(1) ;
    node* temp = ans ;

    // Merge two sorted Linked list 
    while( left != NULL && right != NULL ){
        if( left -> data < right -> data ) {

            temp -> next = left ;
            temp = left ;
            left = left -> next ;

        } else {

            temp -> next = right ;
            temp = right ;
            right = right -> next ;

        }
    }

    // If any list remain non empty 
    while( left != NULL ) {
        temp-> next = left ;
        temp = left ;
        left = left -> next ;

    }

    while( right != NULL ) {
        temp-> next = right ;
        temp = right ;
        right = right -> next ;
        
    }

    ans = ans -> next ;

    return ans ;

}


node* mergeSort(node *head) {
    // Write your code here.

    // We will solve this problem using recursion 
    // Base Case 
    if( head == NULL || head -> next == NULL ) {
        return head ;
    }

    // Break Linked list into two halves 
    node* mid = findMid( head ) ;

    node* left = head ;
    node* right = mid -> next ;
    mid -> next = NULL ; // After breaking LL into two halves first half need to point to NULL 

    // Recursive Call to left and right half to sort the remianing array 
    left = mergeSort(left) ;
    right = mergeSort(right) ;


    // Merge both left and right halves 
    node* result = merge( left, right ) ;

    return result ; 

}


*/