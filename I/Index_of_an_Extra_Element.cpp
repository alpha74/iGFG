// Index of an extra element
// https://practice.geeksforgeeks.org/problems/index-of-an-extra-element/1/
// Aman Kumar

int findExtra(int a[], int b[], int n) 
{
    int ret = -1 ;


    for( int i = 0 ; i < n && ret == -1 ; i++ )
    {
        if( a[i] != b[i] )
        {
            ret = i ;
        }
    }
    return ret ;
}
