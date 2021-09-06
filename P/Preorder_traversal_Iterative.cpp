// Preorder traversal iterative method
// https://practice.geeksforgeeks.org/problems/preorder-traversal/1
// Aman Kumar

vector <int> preorder(Node* root)
{
    vector<int> ret ;
    
    if( root == NULL)
        return ret ;
    
    stack<Node*> stk ;
    stk.push(root) ;
    
    while( !stk.empty() )
    {
        Node *curr = stk.top() ;
        stk.pop() ;
        ret.push_back( curr -> data ) ;
        
        if( curr -> right != NULL)
            stk.push( curr -> right ) ;
        if( curr -> left != NULL)
            stk.push( curr -> left ) ;
    }
    
    return ret ;
}
