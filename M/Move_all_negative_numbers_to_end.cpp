// Move all negative numbers to end
// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
// Aman Kumar

void segregateElements(int arr[],int n)
{
    int pos = 0 ;
    int res[n] ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( arr[i] >= 0 )    pos++ ;
        res[i] = arr[i] ;
    }

    int neg = 0 ;
    for( int i = 0 ; i < n ; i++ )
    {
        if( res[i] < 0 )
        {
            arr[pos++] = res[i] ;
        }
        else
        {
            arr[neg++] = res[i] ;
        }
    }
}
