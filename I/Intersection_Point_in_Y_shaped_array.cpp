// Intersection point in Y shaped array
// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
// Aman Kumar

int intersectPoint(Node* head1, Node* head2)
{
    if( head1 == NULL || head2 == NULL )
        return -1 ;
        
    int count1 = 0, count2 = 0 ;
    
    Node *curr = head1 ;
    
    while( curr != NULL )
    {
        count1++ ;
        curr = curr -> next ;
    }
    
    curr = head2 ;
    while( curr != NULL )
    {
        count2++ ;
        curr = curr -> next ;
    }
    
    int diff = abs(count1-count2) ;
    
    if( count1 > count2 )
    {
        while(diff--)
        {
            head1 = head1 -> next ;
        }
    }
    else
    {
        while(diff--)
            head2 = head2 -> next ;
    }
    bool found = false ;
    int ret = -1 ;
    while( head1 != NULL && head2 != NULL && !found)
    {
        if( head1 == head2 )
        {
            ret = head1 -> data ;
            found = true ;
        }
        head1 = head1 -> next ;
        head2 = head2 -> next ;
    }
    
    return ret ;
}
