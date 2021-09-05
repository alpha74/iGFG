// Check if loop is present in linked list
// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
// Aman Kumar


// Method1: Using slow and fast pointers
bool detectLoop(Node* head)
{
    Node *slow = head ;
    Node *fast = slow -> next ;

    bool ret = false ;

    while( slow != fast && fast != NULL )
    {
        slow = slow -> next ;
        fast = fast -> next ;

        if( fast != NULL )
            fast = fast -> next ;
    }

    if( slow == fast )
        ret = true ;

    return ret ;
}


// Method2: Using hash map
bool detectLoop(Node* head)
{
    map<Node*,bool> freq ;

    bool ret = false ;

    while( head != NULL && ret == false )
    {
        auto iter = freq.find(head) ;

        if( iter == freq.end() )
            freq[head] = true ;
        else    
            ret = true ;

        head = head -> next ;
    }

    return ret ;
}
