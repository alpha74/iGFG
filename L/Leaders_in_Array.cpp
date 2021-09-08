// Find leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. 
// The rightmost element is always a leader. 
// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
// Aman Kumar

vector<int> leaders(int a[], int n)
{
    vector<int> ret ;

    ret.push_back( a[n-1]) ;
    int currmax = a[n-1] ;

    for( int i = n-2 ; i >= 0 ; i-- )
    {
        if( a[i] >= currmax )
        {
            currmax = max( currmax, a[i] ) ;
            ret.push_back( currmax ) ;
        }
    }

    reverse( ret.begin(), ret.end() ) ;

    return ret ;
}
