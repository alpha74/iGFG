// Find lowest common ancestor node in binary tree having unique nodes
// https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1/
// Aman Kumar

Node* lca(Node* root ,int n1 ,int n2 )
{
    if( root == NULL )
        return NULL ;

    // If one of the keys matches numbers
    if( root -> data == n1 || root -> data == n2 )
        return root ;

    // Check left and right sub trees
    Node *leftRes = lca( root -> left, n1, n2 ) ;
    Node *rightRes = lca( root -> right, n1, n2 ) ;

    // If one key is present in each sub trees, then LCA is found
    if( leftRes != NULL && rightRes != NULL )
        return root ;

    if( leftRes != NULL )
        return leftRes ;
    else
        return rightRes ;

}
