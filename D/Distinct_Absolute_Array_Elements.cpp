// Find distinct absolute array elements in O(n) and O(1) space.
// https://practice.geeksforgeeks.org/problems/distinct-absolute-array-elements4529/1#
// Aman Kumar

int distinctCount(int arr[], int n) 
{
    int uniq = n ;

    int i = 0, j = n-1 ;

    while(i < j)
    {
        // Remove duplicates from left side
        while( i < j && arr[i] == arr[i+1])
        {
            uniq-- ;
            i++ ;
        }
        // Remove duplicates from left side
        while( i < j && arr[j] == arr[j-1])
        {
            uniq-- ;
            j-- ;
        }

        if( i == j )
            break ;

        int sum = arr[i] + arr[j] ;

        if( sum == 0 )
        {
            uniq-- ;
            i++ ;
            j-- ;
        }
        else if( sum > 0 )
            j-- ;
        else
            i++ ;
    }

    return uniq; 
}
