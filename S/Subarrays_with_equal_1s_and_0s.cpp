// Number of subarrays with equal 1s and 0s
// https://practice.geeksforgeeks.org/problems/count-subarrays-with-equal-number-of-1s-and-0s-1587115620/1
// Aman Kumar

long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
    unordered_map<int,int> hashsum ;

    long long int sum = 0 ;
    for( int i = 0 ; i < n ; i++ )
    {
        if( arr[i] == 0 )
            sum-- ;
        else    
            sum++ ;

        hashsum[sum]++ ;
    }

    long long int count = 0 ;
    auto iter = hashsum.begin() ;

    for( ; iter != hashsum.end() ; iter++ )
    {
        if( iter -> second > 1 )
        {
            count += (iter->second * (iter->second-1) /2 ) ;
        }
    }

    if( hashsum.find(0) != hashsum.end() )
        count += hashsum[0] ;

    return count ;
}
