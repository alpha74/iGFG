// Fix two swapped nodes of a BST
// https://practice.geeksforgeeks.org/problems/fixed-two-nodes-of-a-bst/1/#
// Aman Kumar

void inorder(Node *root, vector<Node*> &ret )
{
    if( root == NULL )
        return ;

    inorder( root -> left, ret ) ;
    ret.push_back( root ) ;
    inorder( root -> right, ret ) ;
}

void correctBST(struct Node* root )
{
    vector<Node*> inot ;

    inorder( root, inot ) ;

    map<int,int> hash ;
    vector<int> val ;

    for( int i = 0 ; i < inot.size() ; i++ )
    {
        hash[ inot[i] -> data ] = i ;
        val.push_back( inot[i] -> data ) ;
    }

    sort( val.begin() , val.end() ) ;

    bool done = false ;
    int val1 = -1, val2 = -1 ;
    int ind1 = -1, ind2 = -1 ;

    // Find first mismatch on indices
    for( int i = 0 ; i < val.size() && !done ; i++ )
    {
        // Found nodes to be swapped
        if( i != hash[ val[i] ] )
        {
            ind1 = i ;
            ind2 = hash[ val[i] ] ;
            val1 = val[i] ;
            val2 = val[ hash[ val[i] ] ];
            done = true ;
        }
    }

    // Swap the values
    inot[ ind1 ] -> data = val1 ;
    inot[ ind2 ] -> data = val2 ;
}
