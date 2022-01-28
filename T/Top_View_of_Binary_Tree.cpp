// Return top view of binary tree in O(n) time and space.
// https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1#
// Aman Kumar

vector<int> topView(Node *root)
{
    queue<pair<Node*,int>> qu ;

    qu.push( make_pair( root, 0 ) ) ;

    int hzd = 0, l = 0, r = 0 ;

    stack<int> left ;
    vector<int> right ;

    while( !qu.empty() )
    {
        Node *curr = qu.front().first ;
        hzd = qu.front().second ;
        qu.pop() ;

        // Sets first new horizontal distance val, while doing Level OT
        if( hzd < l )
        {
            left.push( curr -> data ) ;
            l = hzd ;
        }
        // Sets first new horizontal distance val, while doing Level OT
        else if( hzd > r )
        {
            right.push_back( curr -> data ) ;
            r = hzd ;
        }

        if( curr -> left != NULL )
            qu.push( make_pair( curr -> left, hzd - 1 ) ) ;
        if( curr -> right != NULL )
            qu.push( make_pair( curr -> right, hzd + 1 )) ;
    }

    vector<int> ret ;

    while( !left.empty() )
    {
        ret.push_back( left.top() ) ;
        left.pop() ;
    }
    ret.push_back( root -> data ) ;

    for( auto x : right )
    {
        ret.push_back( x) ;
    }

    return ret ;
}
