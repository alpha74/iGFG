// Find index(1 based) of first repeating element
// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1
// Aman Kumar

int firstRepeated(int arr[], int n) 
{
    map<int,int> freq ;
    int ret = -1 ;

    for( int i = 0 ; i < n ; i++ )
    {
        freq[ arr[i] ]++ ;
    }

    for( int i = 0 ; i < n && ret == -1 ; i++ )
    {
        if( freq[ arr[i] ] > 1 )
            ret = i+1 ;
    }

    return ret ;
}
