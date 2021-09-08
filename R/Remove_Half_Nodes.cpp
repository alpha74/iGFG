// Remove nodes which have only one child from BT
// https://practice.geeksforgeeks.org/problems/remove-half-nodes/1
// Aman Kumar

Node *removeHalfNodesBT( Node *root )
{
    if( root == NULL )
        return NULL ;
    // If leaf node
    if( root -> left == NULL && root -> right == NULL )
        return root ;
        
    // Handle half
    Node *cleft, *cright ;
    cleft = removeHalfNodesBT( root -> left ) ;
    cright = removeHalfNodesBT( root -> right ) ;
    
    // Not a half node
    if( root -> left != NULL && root -> right != NULL )
    {
        root -> left = cleft ;
        root -> right = cright ;
        return root ;
    }
    
    Node *del = root ;
    delete del ;
    
    if( cleft != NULL )
        return cleft ;
    else 
        return cright ;
}

// Return the root of the modified tree after removing all the half nodes.
Node *RemoveHalfNodes(Node *root)
{
    return removeHalfNodesBT(root) ;
}
