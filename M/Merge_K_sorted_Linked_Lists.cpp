// Merge K sorted linked lists
// https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1
// Aman Kumar

Node *mergeTwo(Node* head1, Node *head2)
{
    if( head1 == NULL )
        return head2 ;
    if( head2 == NULL )
        return head1 ;

    Node *head, *ret ;

    if( head1 -> data < head2 -> data )
    {
        head = head1 ;
        ret = head1 ;
        head1 = head1 -> next ;
    }
    else
    {
         head = head2 ;
         ret = head2 ;
         head2 = head2 -> next ;
    }


    while( head1 != NULL && head2 != NULL )
    {
        if( head1 -> data < head2 -> data )
        {
            head -> next = head1 ;
            head1 = head1 -> next ;
            head = head -> next ;
        }
        else
        {
            head -> next = head2 ;
            head2 = head2 -> next ;
            head = head -> next ;
        }
    }

    while( head1 != NULL )
    {
        head -> next = head1 ;
        head1 = head1 -> next ;
        head = head -> next ;
    }
    while( head2 != NULL )
    {
        head -> next = head2 ;
        head2 = head2 -> next ;
        head = head -> next ;
    }

    return ret ;
}

//Function to merge K sorted linked list.
Node * mergeKLists(Node *arr[], int k)
{
    if( k == 1 )
        return arr[0];

    Node *ret = mergeTwo( arr[0], arr[1] ) ;

    int i = 2 ;
    for( ; i < k ; i++ )
    {
        ret = mergeTwo( ret, arr[i] ) ;
    }
    return ret ;
}
