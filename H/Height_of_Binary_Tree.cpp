// Get height of BT
// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
// Aman Kumar

int heightBT( struct Node *node )
{
    if( node == NULL )
        return 0 ;
    else if( node -> left == NULL && node -> right == NULL )
        return 1 ;

    else
        return max( (1 + heightBT(node -> left)), (1+heightBT(node->right)) ) ;
}

int height(struct Node* node)
{
    return heightBT( node ) ;
}
