// Minimum subsets with consecutive elements
// https://practice.geeksforgeeks.org/problems/min-subsets-with-consecutive-numbers0601/1
// Aman Kumar

int numofsubset(int arr[], int n)
{
    int count = 0 ;

    if( n == 0 || n== 1 )
        return n ;

    sort( arr, arr+n) ;
    int last = 0 ;

    for( int i = 1 ; i < n ; i++ )
    {
        if( arr[i]-1 != arr[i-1])
            count++ ;
    }
    count++ ;

    return count ;
}
