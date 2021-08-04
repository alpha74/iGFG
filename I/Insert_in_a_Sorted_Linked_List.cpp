// Insert a data in sorted Linked list
// https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1/
// Aman Kumar

Node *sortedInsert(struct Node* head, int data) {
        
        Node *newNode = new Node(data) ;
        
        // If passed LL is empty
        if( head == NULL )
        {
            return newNode ;
        }
        
        // If data is < first element of LL
        if( data < head -> data )
        {
            newNode -> next = head ;
            return newNode ;
        }
        
        // Find the correct spot 
        Node *curr = head ;
        Node *prev = head ;
        curr = curr -> next ;
        
        bool stop = false ;
        while( curr != NULL && stop == false )
        {
            if( data <= curr -> data)
                stop = true ;
            else
            {
                prev = curr ;
                curr = curr -> next ;
            }
        }
        
        newNode -> next = prev -> next ;
        prev -> next = newNode ;
        
        return head ;
    }
