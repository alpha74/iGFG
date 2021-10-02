// Rope cutting : Read Desc
// https://practice.geeksforgeeks.org/problems/rope-cutting3334/1
// Aman Kumar

vector<int> RopeCutting(int arr[], int n)
{
    sort( arr, arr+n) ;

    vector<int> ret ;

    // 1 1 2 3 5 5 
    // 0 1 2 3 4 5
    int curr = arr[0] ;

    for( int i = 0 ; i < n ;  )
    {
        while( arr[i] == curr && i < n ) 
            i++ ;

        curr = arr[i] ;
        if( n- i > 0 )
            ret.push_back(n-i) ;
    }
    return ret;
}
