// Check if a subarray is present with 0 sum
// https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
// Aman Kumar

bool subArrayExists(int arr[], int n)
{
    // Check if any negative or 0 is present
    bool present = false ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( arr[i] == 0 )
            return true ;
        if( arr[i] < 0 )
            present = true ;
    }

    if( !present )
        return false ;

    present = false ;

    map<int,bool> psum ;
    int currsum = 0 ;

    for( int i = 0 ; i < n && present == false ; i++ )
    {
        currsum += arr[i] ;
        if( currsum == 0 )
            present = true ;

        auto iter = psum.find( currsum ) ;

        if( iter == psum.end() ) 
            psum[currsum] = 1 ;
        else
            present = true ;
    }

    return present ;
}
