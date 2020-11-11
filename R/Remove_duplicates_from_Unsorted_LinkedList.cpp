// Remove duplicates from unsorted linked list
// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
// Aman Kumar

// Used hashing.


// Function to remove duplicates from the linked list
// root: root of the linked list
Node * removeDuplicates( Node *head) 
{
    Node *curr = head ;
    map<int,int> freq ;
    
    freq[ curr -> data ] = 1 ;
    
    while( curr != NULL )
    {
        Node *cn = curr -> next ;
        
        // If next is not NULL
        if( cn != NULL )
        {
            // If already occured   
            if( freq[ cn -> data ] > 0 )
            {
                curr -> next = cn -> next ;
                delete cn ;
            }
            // If not already occured
            else
            {
                freq[ cn -> data ] = 1 ;
                curr = cn ;
            }
        }
        else
            curr = cn ;
    }
    return head ;
}
