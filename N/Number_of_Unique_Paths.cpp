// Calculate number of unique paths from top left to bottom right cell in AxB
// 
// Aman Kumar


// Recursive solution : Exponential
int NumberOfPath(int a, int b)
{
    if( a == 1 || b == 1 )
        return 1;

    return NumberOfPath( a-1, b) + NumberOfPath(a, b-1) ;
}


// DP solution by storing above sub problems
int NumberOfPath(int a, int b)
{
    if( a == 1 || b == 1 )
        return 1;

    int path[a][b] ;

    // 1 way : For reaching any row or column from top left cell
    for( int i = 0 ; i < a ; i++ )
        path[i][0] = 1 ;

    // 1 way : For reaching any row or column from top left cell
    for( int i = 0 ; i < b ; i++ )
        path[0][i] = 1 ;

    for( int i = 1 ; i < a ; i++ )
    {
        for( int j = 1 ; j < b ; j++ )
        {
            path[i][j] = path[i-1][j] + path[i][j-1] ;
        }
    }

    return path[a-1][b-1] ;
}
