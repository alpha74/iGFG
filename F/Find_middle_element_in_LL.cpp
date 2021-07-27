// Find middle element in linked list
// https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/?company[]=MAQ%20Software&company[]=MAQ%20Software&page=1&query=company[]MAQ%20Softwarepage1company[]MAQ%20Software
// Aman Kumar

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    if( head == NULL )
        return -1 ;
    
    Node *slow, *fast ;
    slow = head ;
    fast = head ;
   
   // 1 node
    if( head -> next == NULL)
        return head -> data ;
    // 2 nodes
    else if( head -> next -> next == NULL )
        return head -> next -> data ;
    // >2 nodes
    else
    {
        slow = head -> next ;
        fast = slow -> next ;
        while( fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next ;
            
            fast = fast -> next ;
            
            if( fast -> next != NULL )
                fast = fast -> next ;
        }
        return slow -> data ;
    }
   
}
