// Level order traversal of BT
// https://practice.geeksforgeeks.org/problems/level-order-traversal/1#
// Aman Kumar

vector<int> levelOrder(Node* node)
{
    queue<Node*> que ;
    vector<int> lot ;

    que.push( node ) ;

    while( !que.empty() )
    {
        Node *curr = que.front() ;
        lot.push_back( curr -> data ) ;

        que.pop() ;

        if( curr -> left != NULL )
            que.push( curr -> left ) ;
        if( curr -> right != NULL )
            que.push( curr -> right ) ;
    }

    return lot ;
}
