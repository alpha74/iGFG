// Print Right view of binary tree
// https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
// Aman Kumar

/*
  - Use two variables: height and maxheight.
  - Push root value when height > maxheight. Update maxheight
*/

void rview( Node *root, vector<int> &res, int h, int &maxh)
{
    if( root == NULL )
        return ;
        
    if( h > maxh )
    {
        res.push_back( root -> data ) ;
        maxh = h ;
    }
    
    rview( root->right, res, h+1, maxh ) ;
    rview( root->left, res, h+1, maxh ) ;
}

// Should return  right view of tree
vector<int> rightView(Node *root)
{
   vector<int> res ;
   int maxh = 0 ;
   rview( root, res, 1, maxh ) ;
   return res ;
}

