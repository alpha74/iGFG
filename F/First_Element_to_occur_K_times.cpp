// Find first element to occur k times
// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1
// Aman Kumar

int firstElementKTime(int a[], int n, int k)
{
    vector<int> hash(100001,0);

    int ret = -1; 

    for( int i = 0 ; i < n && ret == -1; i++ )
    {
        hash[ a[i] ]++ ;

        if( hash[ a[i] ] == k )
            ret = a[i] ;
    }

    return ret ;
}
