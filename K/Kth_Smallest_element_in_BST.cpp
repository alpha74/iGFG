// Kth smallest element in BST
// https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1
// Aman Kumar


void inorder( Node *root, int &k, int &ans )
{
    if( root == NULL || k <= 0 )
        return ;
        
    inorder( root -> left, k, ans ) ;
    k-- ;
    if( k == 0 )
        ans = root -> data ;
    inorder( root -> right, k, ans ) ;
}

// Return the Kth smallest element in the given BST 
int KthSmallestElement(Node *root, int K)
{
    int ans = -1 ;
    inorder( root, K, ans ) ;
    
    return ans ;
}
