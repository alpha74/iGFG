// Check if binary tree is balanced
// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1/#
// Aman Kumar

int getHeight( Node *root, int h, bool &ret )
{
    // If NULL
    if( root == NULL )
        return 0 ;

    // If leaf node
    if( root -> left == NULL && root -> right == NULL )
        return 1 ;

    int leftH = getHeight( root -> left, h+1, ret ) ;
    int rightH = getHeight( root -> right, h+1, ret ) ;

    if( abs(leftH- rightH ) > 1 )
        ret = ret & false ;

    return 1+ max(leftH, rightH) ;
}

bool isBalanced(Node *root)
{
    bool ret = true ;

    getHeight( root, 1, ret ) ;
    return ret ;
}
