// Delete Nodes having greater value on right
// https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1#
// Aman Kumar

Node *reverse(Node* head)
{
    if( head == NULL || head -> next == NULL )
        return head ;

    if( head -> next -> next == NULL)
    {
        Node *ret = head -> next ;
        ret -> next = head ;
        head -> next = NULL ;
        return ret ;
    }

    Node* first = NULL;
    Node* second = head;
    Node* third = head -> next ;

    while( second != NULL )
    {
        second -> next = first ;
        first = second ;
        second = third ;

        if( third != NULL )
            third = third -> next ;
    }
    return first ;
}

Node *compute(Node *head)
{
    head = reverse( head ) ;
    Node *ret = head ;

    int maxt = head -> data ;
    Node *prev = head ;
    head = head -> next ;

    while(head != NULL )
    {
        if( head ->data < maxt )
        {
            Node *del = head ;
            head = head -> next ;
            prev -> next = head ;
            delete del ;
        }
        else
        {
            prev = head ;
            maxt = head -> data ;
            head = head -> next ;
        }
    }

    ret = reverse( ret ) ;
    return ret ;
}
