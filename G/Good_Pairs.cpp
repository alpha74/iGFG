// Good Pairs: Read desc
// https://practice.geeksforgeeks.org/problems/good-pairs4519/1#
// Aman Kumar

long long solve(int arr[], int n)
{
    if( n == 0 )
        return 0 ;

    sort(arr, arr+n) ;

    long long count = 0 ;
    long long currmax = arr[n-1] ;

    for( long long i = n-1; i >= 0 ; )
    {
        long long same = 0 ;

        while( arr[i] == currmax )
        {
            same++ ;
            i-- ;
        }

        count += same * (i +1) ;

        currmax = arr[i] ;

    }

    return count ;
}
