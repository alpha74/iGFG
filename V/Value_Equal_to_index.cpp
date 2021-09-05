// Value equal to index value
// https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1
// Aman Kumar

vector<int> valueEqualToIndex(int arr[], int n) 
{
    vector<int> ret ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( arr[i] == i+1 )
            ret.push_back( arr[i] ) ;
    }

    return ret ;
}
