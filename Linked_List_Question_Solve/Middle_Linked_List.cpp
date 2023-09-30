// Optimized way of finding Linked List 

/*
ListNode* middleNode(ListNode* head) {

    if(head == NULL ) return NULL ;

    if( head -> next == NULL ) return head ;

    // if( head -> next -> next == NULL ) return head -> next ; To handle 2 nodes in list -             optional

    // Algorithms for rest of cases 

    ListNode* slow = head ;
    ListNode* fast = head -> next ;

    while( fast != NULL )
    {
        fast = fast -> next ;
        if( fast != NULL )
        {
            fast = fast -> next  ;

        }
        slow = slow -> next ;
    }

    return slow ;       
}
*/