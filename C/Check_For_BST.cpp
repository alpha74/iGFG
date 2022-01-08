// Check if given tree is BST
// https://practice.geeksforgeeks.org/problems/check-for-bst/1/
// Aman Kumar

bool checkBST(Node *root, Node* left, Node* right)
{
    if( root == NULL )
        return true ;

    if( left != NULL && root -> data <= left -> data )
        return false ;
    if( right != NULL && root -> data >= right -> data) 
        return false ;

    return checkBST(root->left, left,root) && checkBST(root->right, root, right) ;
}
bool isBST(Node* root) 
{
    return checkBST(root, NULL, NULL );
}
