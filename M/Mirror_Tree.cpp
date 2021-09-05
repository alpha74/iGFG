// Mirror the same BT
// https://practice.geeksforgeeks.org/problems/mirror-tree/1
// Aman Kumar

struct Node *mirrorBT(struct Node* root)
{
    if( root == NULL )
        return NULL ;
    
    struct Node *right = root -> right ;
    struct Node *left = root -> left ;
    
    root -> right = mirrorBT( root -> left ) ;
    root -> left = mirrorBT( right ) ;
    
    return root ;   
}

void mirror(struct Node* node) 
{
    mirrorBT(node) ;
}
