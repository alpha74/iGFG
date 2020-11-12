// Add 1 to number represented as Linked List
// https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
// Aman Kumar


Node *reverseLL( Node *head )
{
    if( head == NULL || head -> next == NULL )
        return head ;
        
    Node *one = NULL ;
    Node *two = head ;
    Node *three = head -> next ;
    
    while( two != NULL )
    {
        two -> next = one ;
        
        one = two ;
        two = three ;
        
        if( three != NULL )
        {
            three = three -> next ;
        }
    }
    return one ;
}
Node* addOne(Node *head) 
{
    if( head == NULL )
        return head ;
    
    head = reverseLL( head ) ;
    Node *temp = head ;
    int carry = 1 ;
   
    while( carry == 1 && head != NULL )
    {
        head -> data = head -> data + carry ;
        
        if( head -> data > 9 )
        {
            head -> data = ( head -> data ) % 10 ;
            carry = 1 ;
        }
        else
            carry = 0 ;
        

        head = head -> next ;
    }
    
    head = reverseLL( temp ) ;
    
    
    if( carry == 1 )
    {
        Node *newnode = new Node(1) ;
        newnode -> next = head ;
        return newnode ;
    }
    
    return head ;
}
