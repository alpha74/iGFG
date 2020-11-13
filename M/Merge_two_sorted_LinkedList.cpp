// Merge two sorted Linked List
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
// Aman Kumar


Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    Node *ret = NULL ;
    Node *ans = NULL ;
    
    if( head_A -> data < head_B -> data )
    {
        ret = head_A ;
        head_A = head_A -> next ;
    }
    else
    {
        ret = head_B ;
        head_B = head_B -> next ;
    }
    
    ans = ret ;
    
    while( head_A != NULL && head_B != NULL )
    {
        if( head_A -> data < head_B -> data )
        {
            ret -> next = head_A ;
            head_A = head_A -> next ;
            ret = ret -> next ;
        }
        else
        {
            ret -> next = head_B ;
            head_B = head_B -> next ;
            ret = ret -> next ;
        }
    }
    
    if( head_A != NULL )
    {
        ret -> next = head_A ;
    }
    else if( head_B != NULL )
        ret -> next = head_B ;
    
    return ans ;
}  
