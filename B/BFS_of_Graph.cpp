// BFS traversal of graph
// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#
// Aman Kumar

vector<int> bfsOfGraph(int V, vector<int> adj[]) 
{
    vector<int> ret ;
    vector<int> visit(V,0) ;

    queue<int> que ;
    que.push( 0 ) ;
    visit[0] = 1;
    ret.push_back(0) ;

    while( !que.empty() )
    {
        int curr = que.front() ;
        que.pop() ;


        vector<int> nodes = adj[curr] ;

        for( int i = 0 ; i < nodes.size() ; i++ )
        {
            if( visit[ nodes[i] ] == 0 )
            {
                que.push( nodes[i] ) ;
                ret.push_back( nodes[i] ) ;
                visit[ nodes[i] ] = 1 ;
            }
        }
    }

    return ret; 
}
