// Delete alterante nodes in Linked List
// https://practice.geeksforgeeks.org/problems/delete-alternate-nodes/1
// Aman Kumar

void deleteAlt(struct Node *head)
{
    while( head != NULL )
    {
        Node *cn = head -> next ;
        
        if( cn != NULL )
        {
            head -> next = cn -> next ;
            delete cn ;
        }
        head = head -> next ;
    }
}
