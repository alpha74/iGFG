// Search a node in BST
// https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1
// Aman Kumar

bool search(struct Node* root, int x) 
{
    if( root -> data == x )
        return true ;
    
    if( x > root -> data && root -> right != NULL )
    {
        return search(root -> right, x );
    }
    else if( x < root -> left && root -> left != NULL )
    {
        return search(root -> left, x ) ;
    }
    return false ;
}
