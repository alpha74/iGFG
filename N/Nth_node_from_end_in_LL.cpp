// Nth node from end in linked list
// https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/?company[]=MAQ%20Software&company[]=MAQ%20Software&page=2&query=company[]MAQ%20Softwarepage2company[]MAQ%20Software#
// Aman Kumar

int getNthFromLast(struct Node *head, int n)
{
    int count = 0 ;
    
    struct Node *thead = head ;
    
    // If 0 nodes
    if( head == NULL )
        return -1 ;
    
    while( thead != NULL )
    {
        count++ ;
        thead = thead -> next ;
    }
    
    // If n is more than number of nodes
    if( n > count )
        return -1 ;
    
    n = count - n + 1 ;
    
    while( head != NULL && --n )
    {
         head = head -> next ;
    }
    return head -> data ;
}
