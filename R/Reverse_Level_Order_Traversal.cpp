// Reverse Level order traversal
// https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1
// Aman Kumar

vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ret ;
    queue<Node*> que ;
    stack<int> stk ;
    
    que.push( root ) ;
    
    while( !que.empty() )
    {
        Node *curr = que.front() ;
        
        stk.push( curr -> data ) ;
        que.pop() ;
        
        // Push right node first 
        if( curr -> right != NULL )
            que.push( curr -> right ) ;
        
        if( curr -> left != NULL )
            que.push( curr -> left ) ;
    }
    
    // Reverse the traversed
    while( !stk.empty() )
    {
        ret.push_back( stk.top() ) ;
        stk.pop() ;
    }
    
    return ret ;
}
