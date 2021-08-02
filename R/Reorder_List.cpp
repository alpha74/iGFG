// Reorder linked list : In: 1,2,3,4  Out: 1,4,2,3
// 
// Aman Kumar

// Returns next of middle
Node* getMiddle(Node *head)
{
    if( head == NULL )
        return head ;
    
    Node *slow, *fast ;
    slow = head ;
    fast = head ;
   
   // 1 node
    if( head -> next == NULL)
        return head;
    // 2 nodes
    else if( head -> next -> next == NULL )
        return head -> next ;
    // >2 nodes
    else
    {
        slow = head -> next ;
        fast = slow -> next ;
        while( fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next ;
            
            fast = fast -> next ;
            
            if( fast -> next != NULL )
                fast = fast -> next ;
        }
        return slow -> next ;
    }
   
}

Node *reverseLL( Node *head )
{
    if( head == NULL || head -> next == NULL )
        return head ;
        
    Node *one = NULL ;
    Node *two = head ;
    Node *three = head -> next ;
    
    while( two != NULL )
    {
        two -> next = one ;
        
        one = two ;
        two = three ;
        
        if( three != NULL )
        {
            three = three -> next ;
        }
    }
    return one ;
}

void reorderList(Node* head) 
{
    if( head == NULL || head -> next == NULL || head -> next -> next == NULL )
        return ;
        
    Node *curr1 = head ;
    Node *head2 ;
    Node *curr2 = head -> next ;
    
    head2 = getMiddle( head ) ;
    
    // Set NULL to last element of first half
    curr1 = head ;
    while( curr1 -> next != head2 )
    {
        curr1 = curr1 -> next ;
    }
    curr1 -> next = NULL ;
        
    // Reverse second LL
    head2 = reverseLL( head2 ) ;
        
    // Join both linked list
    curr1 = head ;
    curr2 = head2 ;
        
    while( curr1 != NULL && curr2 != NULL )
    {
        Node *curr1next = curr1 -> next ;
        curr1 -> next = curr2 ;
        Node* curr2next = curr2 -> next ;
        
        curr2 -> next = curr1next ;
        curr1 = curr1next ;
        curr2 = curr2next ;
    }
        
}
