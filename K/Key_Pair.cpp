// Find if two elements exists in array with sum X
// https://practice.geeksforgeeks.org/problems/key-pair5616/1#
// Aman Kumar

bool hasArrayTwoCandidates(int arr[], int n, int x) 
{
    int freq[100001] = {0} ;

    for( int i = 0 ; i < n ; i++ )
    {
        freq[ arr[i] ]++ ;
    }

    bool ret = false ;
    for( int i = 0 ; i < n && ret == false ; i++ )
    {
        if( x- arr[i] >= 0 )
        {
            int iter = freq[ x-arr[i] ] ;
            if( iter > 0 )
            {
                if( x - arr[i] == arr[i] && iter > 1 )
                    ret = true ;
                else if( x - arr[i] != arr[i] )
                    ret = true ;
            }
        }
    }
    return ret ;
}
