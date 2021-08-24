// Maximum sum subarray of size K
// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
// Aman Kumar

int maximumSumSubarray(int k, vector<int> &arr , int N)
{
    int maxsum = 0, sum = 0, i = 0, j = 0 ;


    for( i = 0 ; i < N && j < N ; )
    {
        // Set max sum 
        if( (j-i) == k )
        {
            maxsum = max( sum, maxsum ) ;

            sum -= arr[i] ;
            i++ ;
        }

        else if( (j-i) < k)
        {
            sum += arr[j] ;
            j++ ;
        }
        else
        {
            sum -= arr[i] ;
            i++ ;
        }
    }
    maxsum = max(maxsum, sum ) ;
    return maxsum ;
}
