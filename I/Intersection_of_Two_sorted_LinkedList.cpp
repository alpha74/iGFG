// Intersection of Two sorted Linked Lists
// https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1
// Aman Kumar


Node* findIntersection(Node* head1, Node* head2)
{
    Node *newhead = new Node(0) ;
    Node *ret = newhead ;
    
    while( head1 != NULL && head2 != NULL )
    {
        if( head1 -> data == head2 -> data )
        {
            Node *newnode = new Node( head1 -> data ) ;
            newhead -> next = newnode ;
            newhead = newhead -> next ;
            
            head1 = head1 -> next;
            head2 = head2 -> next ;
        }
        else
        {
            if( head1 -> data < head2 -> data )
                head1 = head1 -> next ;
            
            else
                head2 = head2 -> next ;
        }
    }
    newhead = ret ;
    ret = ret -> next ;
    delete newhead ;
    return ret ;
}
