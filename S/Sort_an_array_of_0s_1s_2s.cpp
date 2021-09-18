// Sort an array of 0s, 1s and 2s in O(n) and O(1) space
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// Aman Kumar

void sort012(int arr[], int n)
{
    int p = 0, last = n-1 ;
    
    // Start setting 0 from p
    for( int i = 0 ; i < n ; i++ )
    {
        // If curr is 0
        // Replace pth with 0 
        if( arr[i] == 0 )
        {
            arr[i] = arr[p] ;
            arr[p] = 0 ;
            p++ ;
        }
    }
    
    // 0 0 2 1 1
    
    // Start setting 1 from p
    for( int i = p ; i < n ; i++ )
    {
        if( arr[i] == 1 )
        {
            arr[i] = arr[p] ;
            arr[p] = 1 ;
            p++ ;
        }
    }
    
}
