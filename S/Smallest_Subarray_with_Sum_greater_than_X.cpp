// Smallest subarray with sum > X
// https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1
// Aman Kumar

int smallestSubWithSum(int arr[], int n, int x)
{
    int i =0, j = 0 ;

    int minsub = INT_MAX ;
    int currsum = 0 ;

    for( ; i < n || j < n ; )
    {
        if( currsum <= x && j < n )
        {
            currsum += arr[j] ;
            j++ ;
        }
        else
        {
            if( currsum > x )
                minsub = min( minsub, (j-i) ) ;

            currsum -= arr[i] ;
            i++ ;
        }

    }

    return minsub ;
}
