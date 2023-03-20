// Convert given level order traversal to BST
// https://practice.geeksforgeeks.org/problems/convert-level-order-traversal-to-bst/1
// Aman Kumar

Node *generateTree(Node *root, int v)
{
    if(root == NULL)
    {
        Node *newnode = new Node(v) ;
        return newnode ;
    }
    
    if(v < root -> data)
        root -> left = generateTree(root -> left, v) ;
    else
        root -> right = generateTree(root -> right, v) ;
    
    return root ;
}

//Function to construct the BST from its given level order traversal.
Node* constructBst(int arr[], int n)
{
    Node *root = NULL ;
    
    for(int i = 0 ; i < n ; i++)
    {
        root = generateTree(root, arr[i]);
    }
    
    return root ;
}
