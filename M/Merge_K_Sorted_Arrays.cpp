// Merge K sorted arrays
// https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1#
// Aman Kumar

vector<int> mergeTwo( vector<int> a, vector<vector<int>> &b, int c, int &K )
{
    vector<int> ret ;
    int i = 0, j = 0 ;
    for( ; i < a.size() && j < K ; )
    {
        if( a[i] < b[c][j] )
        {
            ret.push_back( a[i] ) ;
            i++ ;
        }
        else if( b[c][j] < a[i])
        {
            ret.push_back( b[c][j] ) ;
            j++ ;
        }
        else
        {
            ret.push_back(a[i]);
            ret.push_back(a[i]);
            i++ ;
            j++ ;
        }
    }

    if( i < a.size() )
    {
        while( i < a.size() )
        {
            ret.push_back( a[i] ) ;
            i++ ;
        }
    }
    else if( j < K )
    {
        while( j < K )
        {
            ret.push_back( b[c][j] ) ;
            j++ ;
        }
    }

    return ret;
}

//Function to merge k sorted arrays.
vector<int> mergeKArrays(vector<vector<int>> arr, int K)
{
    vector<int> ret  ;

    for( int i = 0 ; i < K ; i++ )
    {
        ret = mergeTwo( ret, arr, i, K ) ;
    }
    return ret ;
}
