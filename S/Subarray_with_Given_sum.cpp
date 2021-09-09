// Find start and end index (1 based index) of subarray with given sum
// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
// Aman Kumar

vector<int> subarraySum(int arr[], int n, int s)
{
    vector<int> ret ;

    bool found = 0 ;

    int currsum = 0 ;

    int i = 0, j = 0 ;

    for( ; (i < n || j < n) && found == 0 ; )
    {
        if( currsum == s )
        {
            found = 1 ;
            ret.push_back(i+1) ;
            ret.push_back(j );
        }
        else if( currsum < s && j < n)
        {
            currsum += arr[j] ;
            j++ ;
        }
        // currsum > s
        else
        {
            currsum -= arr[i] ;
            i++ ;
        }
        //cout << "\n currsum: " << currsum << " i: " << i << " j: " << j ;
    }

    if( ret.size() == 0 )
        ret.push_back( -1 ) ;

    return ret ;
}
