// Check if circular linked list
// https://practice.geeksforgeeks.org/problems/circular-linked-list/1
// Aman Kumar

bool isCircular(struct Node *head)
{
    struct Node *curr = head ;
    curr = curr -> next ;
    bool res = false ;
    
    while( curr != NULL && res == false )
    {
        if( curr == head )
            res = true ;
        curr = curr -> next ;
    }
    return res ;
}
