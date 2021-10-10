// Find triplets with zero sum
// https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1#
// Aman Kumar

int findTriplets(int arr[], int n)
{ 
    int ret = 0 ;
    for( int i = 0 ; i < n && ret == 0 ; i++ )
    {
        for( int j = i+1 ; j < n && ret == 0 ; j++ )
        {
            for( int k = j+1 ; k < n && ret == 0 ; k++ )
            {
                if( arr[i] + arr[j] + arr[k] == 0 )
                    ret = 1 ;
            }
        }
    }
    return ret ;
}
