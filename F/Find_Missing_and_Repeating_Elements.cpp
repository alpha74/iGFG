// Find missing and repeating elements in array
// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
// Aman Kumar

int *findTwoElement(int *arr, int n) 
{
    int *ret = new int(2) ;
    ret[0] = -1 ;
    ret[1] = -1 ;

    int dup = -1 ;

    // Find duplicate
    for (int i = 0; i < n && dup == -1 ; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            dup = abs( arr[i]) ;
    }

    ret[0] = dup ;

    for( int i = 0 ; i < n ; i++ )
    {
        arr[i] = abs( arr[i] ) ;
    }

    dup = -1 ;

    // Find missing
    for( int i = 0 ; i < n ; i++ )
    {
        arr[ abs(arr[i]) - 1 ] = -1 * abs( arr[ abs(arr[i]) -1]) ;
    }

    for( int i = 0 ; i < n && dup == -1 ; i++ )
    {
        if( arr[i] >= 0 )
            dup = i+1 ;

        //cout << arr[i] << "," << dup << ";" ;
    }
    //cout << "\n" ;
    ret[1] = dup ;

    return ret ;
}
