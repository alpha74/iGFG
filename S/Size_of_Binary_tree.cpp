// Count number of nodes in binary tree
// https://practice.geeksforgeeks.org/problems/size-of-binary-tree/1
// Aman Kumar

void inorder( Node *node, int &count )
{
    if( node == NULL )
        return ;
    
    count++ ;
    inorder( node -> left, count ) ;
    inorder( node -> right, count ) ;
}

/* Computes the number of nodes in a tree. */
int getSize(Node* node)
{
    int count = 0 ;
    inorder( node, count ) ;
    return count ;
}
