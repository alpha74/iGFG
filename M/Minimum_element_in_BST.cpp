// Find min element in BST
// https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1
// Aman Kumar

int getMinBST(struct Node *root)
{
    if( root -> left == NULL )
        return root->data;
    
    return getMinBST( root -> left ) ;
}

int minValue(struct Node *root) 
{
    if( root == NULL )
        return -1 ;
    return getMinBST(root) ;
}
