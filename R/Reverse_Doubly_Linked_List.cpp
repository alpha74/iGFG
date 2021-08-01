// Reverse a doubly linked list
// https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1/
// Aman Kumar

Node* reverseList(struct Node *head)
{
    // 0 or 1 node
    if( head == NULL || head -> next == NULL )
        return head ;
        
    // 2 nodes
    if( head -> next -> next == NULL )
    {
        Node * curr = head ;
        curr = head -> next ;
        curr -> next = head ;
        head -> next = NULL ;
        return curr ;
    }
    
    // 3 or more nodes
    Node *first, *second, *third ;
    first = NULL ;
    second = head ;
    third = second -> next ;
    
    while( third != NULL )
    {
        second -> next = first ;
        first = second ;
        second = third ;
        third = third -> next ;
        
        if( third == NULL )
        {
            second -> next = first ;
        }
    }
    return second ;
}

Node* reverseDLL(Node * head)
{
    if( head == NULL || head -> next == NULL )
        return head ;
    
    // Reverse the linked list using next pointer only
    head = reverseList( head ) ;
    
    // Take two pointers and set prev pointer
    Node *first, *second ;
    first = head ;
    first -> prev = NULL ;
    second = first -> next ;
    
    while( second != NULL)
    {
        second -> prev = first ;
        first = second ;
        second = second -> next ;
    }
    return head ;
}
