// Swap and maximize : Read desc
// https://practice.geeksforgeeks.org/problems/swap-and-maximize5859/1
// Aman Kumar

long long int maxSum(int arr[], int n)
{
    sort(arr, arr+n) ;
    
    int sum = 0 ;                        
    
    for( int i = 0 ; i < n/2 ; i++)
    {
        sum -= (2 * arr[i] );
        sum += (2 * arr[n-i-1] );
    }
    return sum ;
}
