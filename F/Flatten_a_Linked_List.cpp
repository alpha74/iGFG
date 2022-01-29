// Flatten a linked list with next and bottom pointers
// https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1
// Aman Kumar

Node *mergeList( Node* l1, Node *l2 ) 
{
    Node *head = new Node(-1) ;
    Node *temp = head ;
    
    while( l1 != NULL && l2 != NULL )
    {
        if( l1 -> data < l2 -> data )
        {
            temp -> bottom = l1 ;
            temp = temp -> bottom ;
            l1 = l1 -> bottom ;
        }
        else if( l2 -> data < l1 -> data )
        {
            temp -> bottom = l2 ;
            temp = temp -> bottom ;
            l2 = l2 -> bottom ;
        }
        else
        {
            temp -> bottom = l1 ;
            temp = temp -> bottom ;
            l1 = l1 -> bottom ;
            
            temp -> bottom = l2 ;
            temp = temp -> bottom ;
            l2 = l2 -> bottom ;
        }
    }
    
    while( l1 != NULL )
    {
        temp -> bottom = l1 ;
        temp = temp -> bottom ;
        l1 = l1 -> bottom ;
    }
    while( l2 != NULL )
    {
        temp -> bottom = l2 ;
        temp = temp -> bottom ;
        l2 = l2 -> bottom ;
    }
    
    temp -> bottom = NULL ;
    temp = head ;
    head = head -> bottom ;
    
    delete temp ;
    return head ;
}

Node *divideMerge( Node *root, int count )
{
    if( count == 1 )
        return root ;
    
    int half = count/2 ;
    
    Node *temp = root ;
    Node *prev = root ;
    
    while( half-- )
    {
        prev = temp ;
        temp = temp -> next ;
    }
    
    prev -> next = NULL ;
    Node *list1 = divideMerge( root, count/2) ;
    Node *list2 = divideMerge( temp, count-(count/2) ) ;
    
    temp = mergeList( list1, list2) ;
    
    return temp ;
}


/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
    int count = 0 ;
    
    Node *temp = root ;
    while( temp != NULL )
    {
        temp = temp -> next ;
        count++ ;
    }
    
    temp = divideMerge( root, count ) ;
    
    return temp ;
}
