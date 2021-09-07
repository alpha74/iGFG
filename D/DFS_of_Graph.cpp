// Depth first search of graph
// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#
// Aman Kumar

void dfsg( int curr, vector<int> adj[], vector<int> &visit, vector<int> &ret, int &V )
{
    if( visit[ curr ] == 1 )
        return ;

    visit[ curr ] = 1 ;
    ret.push_back( curr ) ;

    vector<int> nodes = adj[curr] ;
    for( int i = 0 ; i < nodes.size() ; i++ )
    {
        dfsg( adj[curr][i], adj, visit, ret, V ) ;
    }

}

vector<int> dfsOfGraph(int V, vector<int> adj[]) 
{
    vector<int> ret ;
    vector<int> visit(V,0) ;

    dfsg( 0, adj, visit, ret, V ) ;

    return ret ;
}
