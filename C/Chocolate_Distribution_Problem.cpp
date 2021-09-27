// Read Desc
// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#
// Aman Kumar

long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort( a.begin(), a.end() ) ;

    long long int mindiff = INT_MAX ;

    int i =0, j = 0 ;

    for( int i = 0 ; i+m-1 < n ; i++ )
    {
        long long int currdiff = INT_MAX ;
        currdiff = a[i+m-1] - a[i] ;

        mindiff = min( mindiff, currdiff ) ;
    }

    return mindiff ;
}
