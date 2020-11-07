// Left view of Binary Tree
// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
// Aman Kumar

/*
  - Maintain two variables: height and maxheight.
  - Push root value when height > maxheight. Update maxheight.
*/

void lview( Node *root, vector<int> &res, int h, int &maxh )
{
    if( root == NULL )
        return ;
        
    if( h > maxh )
    {
        res.push_back( root -> data ) ;
        maxh = h ;
    }
    
    lview( root -> left, res, h+1, maxh ) ;
    lview( root -> right, res, h+1, maxh ) ;
}

// A wrapper over leftViewUtil()
vector<int> leftView(Node *root)
{
   vector<int> res ;
   int maxh =0 ;
   lview( root, res, 1, maxh) ;
   return res ;
}
