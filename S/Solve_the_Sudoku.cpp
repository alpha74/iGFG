// Solve the Sudoku
// https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1/
// Aman Kumar

bool isSafe( int grid[N][N], int row, int col, int val )
{
    // Check if val is present in same row
    for( int i = 0 ; i <= 8 ; i++ )
    {
        if( grid[row][i] == val )
            return false ;
    }

    // Check if val is present in same col
    for( int i = 0 ; i <= 8 ; i++ )
    {
        if( grid[i][col] == val )
            return false ;
    }

    // Check if val is present in 3x3 box
    int startRow = row - (row % 3) ;
    int startCol = col - (col % 3) ;

    for( int i = 0 ; i < 3 ; i++ )
    {
        for( int j = 0 ; j < 3 ; j++ )
        {
            if( grid[i+ startRow][j+ startCol] == val )
                return false ;
        }
    }

    return true ;
}

bool solve(int grid[N][N], int row, int col)
{
    if( row == N-1 && col == N)
        return true ;

    if( col == N )
    {
        row++ ;
        col = 0 ;
    }

    if( grid[row][col] > 0 )
        return solve( grid, row, col+1) ;

    for( int i = 1 ; i <= N ; i++ )
    {
        if( isSafe( grid, row, col, i ))
        {
            grid[row][col] = i ;

            if( solve( grid, row, col +1 ) )
                return true ;
        }
        grid[row][col] = 0 ;
    }
    return false ;
}

//Function to find a solved Sudoku. 
bool SolveSudoku(int grid[N][N])  
{ 
    if( solve( grid, 0, 0 ) )
        return true ;
    return false ;
}

//Function to print grids of the Sudoku.
void printGrid (int grid[N][N]) 
{
    for( int i = 0 ; i < N ; i++ )
    {
        for( int j = 0 ; j < N ; j++ )
        {
            cout << grid[i][j] << " " ;
        }

    }
}
