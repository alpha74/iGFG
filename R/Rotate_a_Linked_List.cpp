// Left Rotate a linked list by K
// https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1
// Aman Kumar

Node* rotate(Node* head, int k)
{
    // Find last node
    Node *last = head ;

    while( last -> next != NULL )
    {
        last = last -> next ;
    }

    while( k-- )
    {
        last -> next = head ;
        last = last -> next ;
        Node *temp = head ;
        head = head -> next ;
        temp -> next = NULL ;
    }
    return head ;
}
