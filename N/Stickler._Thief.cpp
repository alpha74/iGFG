// See desc
// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1#
// Aman Kumar

int FindMaxSum(int arr[], int n)
{
    int inc = arr[0] ;
    int exc = 0, exc2 = 0 ;

    for( int i = 1 ; i < n ; i++ )
    {
        // Curr max excluding ith 
        exc2 = max(exc, inc) ;

        // Curr max including ith ( it will require max excluding prev)
        inc = exc + arr[i] ;

        // Current max excluding ith
        exc = exc2 ;
    }
    return max(exc,inc) ;
}
