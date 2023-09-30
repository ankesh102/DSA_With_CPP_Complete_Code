// Function logic to reverse Linked List - Iteratively 

/*

1. Iterative Solution 

ListNode* reverseList(ListNode* head) {

        if(head == NULL || head -> next == NULL) return head ;

        ListNode* prev = NULL ;
        ListNode* curr = head ;

        while(curr != NULL) 
        {
            ListNode* forward = curr -> next ;
            curr -> next  = prev ;

            // Now shift curr and prev to one place forward 
            prev = curr ;
            curr = forward ;

        }
        return prev ; 
}


2. Recursive Solution 

void reverse(Node* &head, Node* curr, Node* prev) 
{
    // Base Case 
    if(curr == NULL) {
        head = prev ;
        return ;
    }

    // Solving one case 
    Node* forward = curr -> next ; 
    reverse(head, forward, curr) ;
    curr->next=prev;
}

Node* reverseLinkedList(Node* &head )
{
    Node* curr = head ;
    Node* prev = NULL ;
    reverse(head, curr, prev) ;
    return head ; 
}
}
*/