// Root to leaf path sum
// https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1/#
// Aman Kumar

void checkPathSum(Node *root, bool &ret, int sum, int &t)
{
    if( root == NULL || ret == true )
        return ;

    sum += root -> data ;

    if( sum == t && root->left == NULL && root-> right == NULL)
    {
        ret = true ;
        return ;
    }

    checkPathSum(root->left, ret, sum, t ) ;
    checkPathSum(root->right, ret, sum, t) ;
}

public:
bool hasPathSum(Node *root, int S) 
{
    bool ret = false ;

    int sum = 0 ;
    checkPathSum(root, ret, sum, S) ;

    return ret ;
}
