// Remove every Kth node in Linked List
// https://practice.geeksforgeeks.org/problems/remove-every-kth-node/1
// Aman Kumar


Node* deleteK(Node *head,int K)
{
   int i = 0 ;
   
   Node *ret = head ;
   
   while( head != NULL )
   {
       i++ ;
       
       if( i == K-1 )
       {
           Node *del = head -> next ;
           
           if( del != NULL )
           {
               head -> next = head -> next -> next ;
               delete del ;
           }
           head = head -> next ;
           i = 0 ;
       }
       else
        head = head -> next ;
   }
   
    if( K == 1 )
        return NULL ;
    else
        return ret ;
}
