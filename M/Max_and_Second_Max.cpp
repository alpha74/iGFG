// Find max and second max
// https://practice.geeksforgeeks.org/problems/max-and-second-max/1
// Aman Kumar

vector<int> largestAndSecondLargest(int n, int arr[])
{
    vector<int> ret(2) ;
    ret[0] = -1 ;
    ret[1] = -1 ;

    int max1 = INT_MIN ;

    for( int i = 0 ; i < n ; i++ )
    {
        max1 = max( max1, arr[i] ) ;
    }
    if( max1 != INT_MIN )
        ret[0] = max1 ;

    int max2 = INT_MIN ;
    for( int i = 0 ; i < n ; i++ )
    {
        if( arr[i] != max1 )
            max2 = max( max2, arr[i] ) ;
    }

    if( max2 != INT_MIN)
        ret[1] = max2 ;

    return ret;
 }
