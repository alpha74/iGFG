// Inorder traversal of BT iteratively.
// https://practice.geeksforgeeks.org/problems/inorder-traversal/1#
// Aman Kumar

vector<int> inOrder(Node* root) 
    {
        vector<int> ret ;
        stack<Node*> stk ;
        
        if( root == NULL )
            return ret ;
    
    
        Node *curr = root ;
            
        while( !stk.empty() || curr != NULL )
        {
            // Go on pushing the curr till left
            if( curr != NULL )
            {
                stk.push( curr ) ;
                curr = curr -> left ;
            }
            
            // No more left nodes to go to from curr
            else if( !stk.empty() )
            {
                curr = stk.top() ;
                ret.push_back( curr -> data ) ;
                stk.pop() ;
            
                curr = curr -> right ;
            }
            
        }
        
        return ret ;
    }
