// Find number of islands in array of 0 and 1(1 is land)
// 
// Aman Kumar

void findAllNodes( int i, int j, vector<vector<bool>> &visited, int &n, int &m, vector<vector<char>>& grid)
{
    // Find complete island

    queue<pair<int,int>> nodes ;
    nodes.push( make_pair(i,j)) ;

    vector<int> posi = { -1, 1, 0, 0, -1, -1, 1, 1 } ;
    vector<int> posj = { 0, 0, -1, 1, -1, 1, -1, 1 } ;

    // In same row
    while( !nodes.empty() )
    {
        pair<int,int> curr = nodes.front() ;
        nodes.pop() ;
        i = curr.first ;
        j = curr.second ;

        if( visited[ curr.first][ curr.second ] == 0 )
            visited[ curr.first][ curr.second ] = 1 ;
        else
            continue ;

        // Check on all 4 sides and diagonals
        for( int k = 0 ; k < 8 ; k++ )
        {
            int currposi = i + posi[k] ;
            int currposj = j + posj[k] ;

            if( currposi >= 0 && currposi < n && currposj >= 0 && currposj < m )
            {
                if( grid[ currposi ][ currposj ] == '1' && visited[ currposi][currposj] == 0 )
                    nodes.push( make_pair( currposi, currposj) ) ;
            }
        }

    }

}

int numIslands(vector<vector<char>>& grid)
{
    int islands = 0 ;

    int n = grid.size() ;
    int m = grid[0].size() ;

    vector<vector<bool>> visited( n, vector<bool> (m,0)) ;

    // Find a one
    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++)
        {
            if( grid[i][j] == '1' && visited[i][j] == 0 )
            {
                findAllNodes( i, j, visited, n, m, grid ) ;
                islands++ ;
                //cout << "\n island: " << islands ;
            }
        }
    }
    return islands ;
}
