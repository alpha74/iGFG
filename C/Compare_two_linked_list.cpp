// Compare two linked list
// https://practice.geeksforgeeks.org/problems/compare-two-linked-lists/1/
// Aman Kumar

int compare(Node *list1, Node *list2) 
{
    int count1 = 0, count2 = 0 ;
    
    // Both have same number of nodes
    int ret = 0 ;
    
    while( list1 != NULL && ret == 0 )
    {
        if( (list1 -> c ) > (list2 -> c))
            ret = 1 ;
        else if( (list2 -> c) > (list1 -> c ))
            ret = -1 ;
            
        list1 = list1 -> next ;
        list2 = list2 -> next ;
    }
    return ret ;
}
