// Print BST elements in a given L,R range
// https://practice.geeksforgeeks.org/problems/print-bst-elements-in-given-range/1/
// Aman Kumar

void inorder(Node *root, int &l, int &r, vector<int> &ret )
{
    if( root == NULL )
        return ;

    inorder( root -> left, l, r, ret ) ;
    if( root -> data >= l && root -> data <= r )
        ret.push_back( root ->data ) ;

    inorder( root -> right, l, r, ret ) ;
}

vector<int> printNearNodes(Node *root, int low, int high) {
    vector<int> ret ;

    inorder( root, low, high, ret ) ;

    return ret ;
}
