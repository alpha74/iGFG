// Find Equilibrium Point in an array. It is a position such that the sum of elements before it is equal to the sum of elements after it.
// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
// Aman Kumar

int equilibriumPoint(long long a[], int n) 
{
    int allsum = 0 ;

    if( n == 1)
        return 1 ;

    for( int i = 0 ; i < n ; i++ )
    {
        allsum += a[i] ;
    }

    int rsum = allsum, lsum = 0 ;
    int ret = -1 ;
    rsum -= a[0] ;

    for( int i = 1 ; i < n && ret == -1 ; i++ )
    {
        lsum += a[i-1] ;
        rsum -= a[i] ;

        if( rsum == lsum )
            ret = i+1 ;
    }

    return ret ;
}
