// Kth largest element in BST
// https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1
// Aman Kumar

/*
  - Do reverse inorder traversal.
  - Maintain a counter. Return when counter == k.
*/

void revInorder( Node *root, int &k, int &ans )
{
    if( root == NULL || k <= 0 )
        return ;
        
  
    revInorder( root -> right, k, ans ) ;
    k-- ;
    if( k == 0 )
    {
        ans = root -> data ;
        return ;
    }
    
    revInorder( root -> left, k, ans ) ;
}

// return the Kth largest element in the given BST rooted at 'root'
int kthLargest(Node *root, int K)
{
    int ans = 0, i = 0 ;
    
    revInorder( root, K, ans ) ;
    
    return ans ;
}
