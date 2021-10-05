// Largest Fibonacci series
// https://practice.geeksforgeeks.org/problems/largest-fibonacci-subsequence2206/1#
// Aman Kumar

vector<int> findFibSubset(int arr[], int n) 
{
    int maxnum = 0 ;

    for( int i = 0 ; i < n ; i++ )
        maxnum = max( maxnum, arr[i] ) ;

    map<int,bool> hash ;

    hash[0] = true ;
    hash[1] = true ;

    int last1 = 0 ;
    int last2 = 1 ;
    int curr = 0 ;

    while( curr <= maxnum )
    {
        curr = last1 + last2 ;
        last1 = last2 ;
        last2 = curr ;
        hash[ curr ] = true ;
    }

    vector<int> ret ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( hash.find( arr[i] ) != hash.end() )
            ret.push_back( arr[i] ) ;
    }

    return ret ;
}
