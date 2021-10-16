// Insert a node in BST
// https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1
// Aman Kumar

Node *insertNode( Node *root,int k )
{
    if( root == NULL )
    {
        Node *newnode = new Node(k) ;
        return newnode ;
    }
    
    if( root -> data == k )
        return root ;
    
    if( root -> data < k )
        root -> right = insertNode( root -> right, k );
    else if( root -> data > k )
        root -> left = insertNode( root -> left, k );
    
    return root ;
}

// Function to insert a node in a BST.
Node* insert(Node* root, int Key) 
{
    return insertNode(root, Key) ;
}
