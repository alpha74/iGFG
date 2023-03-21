// Number of zero filled subarrays
//https://leetcode.com/problems/number-of-zero-filled-subarrays/description/
// Aman Kumar

// Runtime 150 ms Beats 95.78%
// Memory 107.5 MB Beats 54.45%
long long getFactorial(int n, unordered_map<int,int> &hash)
{
    if( n == 0 )
        return 0 ;

    long long ret = 0 ;

    for( long long i = 1 ; i <= n ; i++ )
    {
        ret += i ;
    }

    return ret ;
}

long long zeroFilledSubarray(vector<int>& nums) 
{
    long long ret = 0 ;
    unordered_map<int,int> hash ;

    int start = 0, end = 0 ;
    int n = nums.size() ;

    for( ; start < n ; start++ )
    {
        if(nums[ start ] == 0 )
        {
            end = start+1 ;

            // Find all consecutive zeros
            while(end < n && nums[ end ] == 0 )
                end++ ;

            long long count = end - start ;

            ret += getFactorial(count, hash) ;

            start = end ;
        }
    }

    return ret ;    
/*
[0,0,0,0,0]
*/
}
