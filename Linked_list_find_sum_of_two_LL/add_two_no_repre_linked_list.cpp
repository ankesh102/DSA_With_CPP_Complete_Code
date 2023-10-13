// Function 

// Brute force 

/*

class Solution
{
    private: 
    
    Node* reverse(struct Node* head ) {
        Node* prev = NULL ;
        Node* curr = head ;
        Node* next = NULL ;
        
        while(curr != NULL) {
            next = curr -> next ;
            curr -> next = prev ;
            prev = curr ;
            curr = next ;
        }
        
        return prev ;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
        
        Node* temp = new Node(val) ;
        if(head == NULL) {
            
            head = temp ;
            tail = temp ;
            return ;
            
        } else {
            
            tail -> next = temp ;
            tail = temp ;
            
            
        }
        
    }
    
    struct Node* add( struct Node* first, struct Node* second ) {
            
        // step 1 : carry = 0
        int carry = 0 ;
        
        // To insert into new node 
        Node* ansHead = NULL ;
        Node* ansTail = NULL ;
        
        // Finding sum 
        while(first != NULL && second != NULL ) {
            
            int sum = carry + first -> data + second -> data ;
            
            int digit = sum % 10 ;
            
            // Create node and add answer in linked list 
            insertAtTail(ansHead, ansTail, digit) ;
            
            carry = sum / 10 ;
            
            first = first -> next ;
            second = second -> next ;
            
        }
        
        // If any node remains in any of the input linked list 
        while( first != NULL ) {
            int sum = carry + first -> data ;
            
            int digit = sum % 10 ;
            // Create node and add answer in linked list 
            insertAtTail(ansHead, ansTail, digit) ;
            
            carry = sum / 10 ;
            
            first = first -> next ;
            
        }
        
         while( second != NULL ) {
            int sum = carry + second -> data ;
            
            int digit = sum % 10 ;
            // Create node and add answer in linked list 
            insertAtTail(ansHead, ansTail, digit) ;
            
            carry = sum / 10 ;
            second = second -> next ;
            
        }
        
        // If both LL is of same length then carry may be remains
        while(carry != 0 ) {
             
            int sum = carry ;
            
            int digit = sum % 10 ;
            // Create node and add answer in linked list 
            insertAtTail(ansHead, ansTail, digit) ;
            
            carry = sum / 10 ;
            
        }
        
        return ansHead ;
        
        
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        // Step 1 : Reverse both the input linked list 
        first = reverse(first) ;
        second = reverse(second) ;
        
        // Step 2 : Add both the linked list 
        Node* ans = add(first, second) ;
        
        
        // Step 3 : Reverse answer Linked List 
        ans = reverse(ans) ;
        
        return ans ;
        
    }
};
*/



// Optimized one and reduced Time Complexity

/*
class Solution
{
    private: 
    
    Node* reverse(struct Node* head ) {
        Node* prev = NULL ;
        Node* curr = head ;
        Node* next = NULL ;
        
        while(curr != NULL) {
            next = curr -> next ;
            curr -> next = prev ;
            prev = curr ;
            curr = next ;
        }
        
        return prev ;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
        
        Node* temp = new Node(val) ;
        if(head == NULL) {
            
            head = temp ;
            tail = temp ;
            return ;
            
        } else {
            
            tail -> next = temp ;
            tail = temp ;
            
            
        }
        
    }
    
    struct Node* add( struct Node* first, struct Node* second ) {
            
        // step 1 : carry = 0
        int carry = 0 ;
        
        // To insert into new node 
        Node* ansHead = NULL ;
        Node* ansTail = NULL ;
        
        // Finding sum 
        
        
        // generalize the code 
        while( first != NULL || second != NULL || carry != 0 ) {
            
            int val1 = 0;
            if( first != NULL ) {
                val1 = first -> data ; 
                
            }
            
            int val2 = 0;
            if( second != NULL ) {
                val2 = second -> data ;
            }
            
            int sum = carry + val1 + val2 ;
            
            int digit = sum % 10 ;
            
           // Create node and add answer in linked list 
            insertAtTail(ansHead, ansTail, digit) ;
            
            carry = sum / 10 ;
        
            // Make it generic 
            if( first != NULL) 
                first = first -> next ;
                
            if( second != NULL )
                second = second -> next ;
            
            
        }
        
        
        
        // Remove this commented part and it will work 
        
        // while(first != NULL && second != NULL ) {
            
        //     int sum = carry + first -> data + second -> data ;
            
        //     int digit = sum % 10 ;
            
        //     // Create node and add answer in linked list 
        //     insertAtTail(ansHead, ansTail, digit) ;
            
        //     carry = sum / 10 ;
            
        //     first = first -> next ;
        //     second = second -> next ;
            
        // }
        
        // // If any node remains in any of the input linked list 
        // while( first != NULL ) {
        //     int sum = carry + first -> data ;
            
        //     int digit = sum % 10 ;
        //     // Create node and add answer in linked list 
        //     insertAtTail(ansHead, ansTail, digit) ;
            
        //     carry = sum / 10 ;
            
        //     first = first -> next ;
            
        // }
        
        //  while( second != NULL ) {
        //     int sum = carry + second -> data ;
            
        //     int digit = sum % 10 ;
        //     // Create node and add answer in linked list 
        //     insertAtTail(ansHead, ansTail, digit) ;
            
        //     carry = sum / 10 ;
        //     second = second -> next ;
            
        // }
        
        // // If both LL is of same length then carry may be remains
        // while(carry != 0 ) {
             
        //     int sum = carry ;
            
        //     int digit = sum % 10 ;
        //     // Create node and add answer in linked list 
        //     insertAtTail(ansHead, ansTail, digit) ;
            
        //     carry = sum / 10 ;
            
        // }
        
        return ansHead ;
        
        
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        // Step 1 : Reverse both the input linked list 
        first = reverse(first) ;
        second = reverse(second) ;
        
        // Step 2 : Add both the linked list 
        Node* ans = add(first, second) ;
        
        
        // Step 3 : Reverse answer Linked List 
        ans = reverse(ans) ;
        
        return ans ;
        
    }
};

*/ 

