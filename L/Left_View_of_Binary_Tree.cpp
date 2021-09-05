// Left view of Binary Tree
// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
// Aman Kumar

/*
  Method1 : Using height
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


/*
  Method2: Using 2 queues
*/

vector<int> leftView(Node *root)
{
    queue<Node*> q1, q2 ;
    
    if( root != NULL)
    q1.push( root ) ;
    
    vector<int> ret ;
    
    while( !q1.empty() || !q2.empty() )
    {
        if( !q1.empty() )
        {
            Node *curr = q1.front() ;
            
            ret.push_back( curr -> data );
            
            while( !q1.empty() )
            {
                Node *lev = q1.front() ;
                
                if( lev -> left != NULL )
                    q2.push( lev -> left ) ;
                if( lev -> right != NULL )
                    q2.push( lev -> right ) ;
               
                 q1.pop() ;
            }
        }
        else if( !q2.empty()  )
        {
            Node *curr = q2.front() ;
            ret.push_back( curr -> data ) ;
            
            while( !q2.empty() )
            {
                Node *lev = q2.front() ;
                
                 if( lev -> left != NULL )
                    q1.push( lev -> left ) ;
                if( lev -> right != NULL )
                    q1.push( lev -> right ) ;
                
                q2.pop() ;
            }
            
        }
    }
    return ret ;
}
