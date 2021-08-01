// Delete node without head pointer
// https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1/
// Aman Kumar

//Function to delete a node without any reference to head pointer.
void deleteNode(Node *del)
{
   // Copy data from next node to curr node
   if( del -> next == NULL )
   {
       Node *curr ;
       curr = del ;
       delete del ;
       curr = NULL ;
   }
   else
   {
       Node *nextNode = del -> next ;
       del -> data = nextNode -> data ;
       del -> next = nextNode -> next ;
       delete nextNode ;
   }
}
