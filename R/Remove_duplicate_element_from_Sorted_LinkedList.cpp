// Remove duplicate element from sorted Linked List
// https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
// Aman Kumar


// root: head node
Node *removeDuplicates(Node *root)
{
    Node *head = root ;
    Node *curr = root ;
    
    while( curr != NULL )
    {
        Node *cnext = curr -> next ;
        
        // If next is not Null
        if( cnext != NULL )
        {
            // If next is duplicate
            if( cnext -> data == curr -> data )
            {
                curr -> next = cnext -> next ;
                delete cnext ;
            }
            else
                curr = cnext ;
        }
        else
            curr = cnext ;
    }
    return head ;
}
