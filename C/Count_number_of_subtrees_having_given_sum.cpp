// Count Number of SubTrees having given Sum
// https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1
// Aman Kumar

int countSumX( Node *root, int &count, int &x )
{
    if( root == NULL )
        return 0 ;
    
    else
    {
        int subsum = root->data + ( countSumX(root->left, count, x) ) + (countSumX(root->right, count, x)) ;
        
        if( subsum == x )
            count++ ;
        
        return subsum ;
    }
}


int countSubtreesWithSumX(Node* root, int X)
{
	int count = 0, x = X ;
	countSumX( root, count, x ) ;
	
	return count ;
}
