// Add two numbers represented by linked lists
// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1#
// Aman Kumar

Node *reverseList( Node *head )
{
    if( head == NULL || head -> next == NULL )
        return head ;
    
    Node *first = NULL, *second = head, *third = head -> next ;
    
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

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    first = reverseList( first ) ;
    second = reverseList( second ) ;

    Node *sum = new Node(0) ;
    Node *ret = sum ;

    int carry = 0 ;
    while( first != NULL && second != NULL )
    {
        int total = first -> data + second -> data + carry ;

        if( total > 9 )
        {
            total = total % 10 ;
            carry = 1 ;
        }
        else
            carry = 0 ;

        Node *newnode = new Node( total ) ;

        sum -> next = newnode;
        sum = sum -> next ;

        first = first -> next ;
        second = second -> next ;
    }


    while( first != NULL )
    {
        int total = first -> data  + carry ;

        if( total > 9 )
        {
            total = total % 10 ;
            carry = 1 ;
        }
        else
            carry = 0 ;

        Node *newnode = new Node( total ) ;
        sum -> next = newnode ;
        sum = sum -> next ;

        first = first -> next ;
    }
    /*
        0 0 1 7 8 3 6 9 4
        8 4 8 5 7 2 3 8 3
    */

    while( second != NULL )
    {
        int total = second -> data + carry ;

        if( total > 9 )
        {
            total = total % 10 ;
            carry = 1 ;
        }
        else
            carry = 0 ;

        Node *newnode = new Node( total ) ;
        sum -> next = newnode ;
        sum = sum -> next ;

        second = second -> next ;
    }

    if( carry == 1 )
    {
        Node *newnode = new Node(1) ;
        sum -> next = newnode ;
        sum = sum -> next ;
    }

    sum -> next = NULL ;

    sum = ret ;
    ret = ret -> next ;
    delete sum ;

    ret = reverseList( ret ) ;
    return ret ;
}
