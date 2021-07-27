// Check if given tree is BST
// https://practice.geeksforgeeks.org/problems/check-for-bst/1/
// Aman Kumar

bool checkBST(Node *root, int left, int right)
{
    if( root == NULL )
        return true ;
    
    if( root -> data <= left || root -> data >= right )
        return false ;
    
    bool ret = true ;
    
    // Left sub tree
    ret = ret & ( checkBST( root -> left, left, root -> data )) ;
    // Right sub tree
    ret = ret & ( checkBST( root -> right, root -> data, right )) ;
    return ret ;
}

class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        return checkBST(root, INT_MIN, INT_MAX );
    }
};
