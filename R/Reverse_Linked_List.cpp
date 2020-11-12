// Reverse a Linked List
// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1
// Aman Kumar

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

// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    return reverseLL( head ) ;
}
