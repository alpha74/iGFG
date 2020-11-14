// Occurence of an element in Linked List
// https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1
// Aman Kumar

int count(struct node* head, int search_for)
{
    int count = 0 ;
    
    while( head != NULL )
    {
        if( search_for == head->data)
            count++ ;
        head = head -> next ;
    }
    return count ;
}
