// Count number of nodes in Linked list
//https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1/
// Aman Kumar

int getCount(struct Node* head)
{
    int count = 0 ;
    
    while( head != NULL )
    {
        count++ ;
        head = head -> next ;
    }
    
    return count ;
}
