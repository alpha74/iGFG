// Reverse coding : Read desc
// https://practice.geeksforgeeks.org/problems/reverse-coding2452/1#
// Aman Kumar

int revCoding(int n, int m) 
{
    int res[10001] = { 0 } ;

    res[0] = 0 ;
    res[1] = 1 ;

    for( int i = 2 ; i <= 10000 ; i++ )
    {
        res[i] = i+res[i-1] ;
    }

    if( res[n] != m )
        return 0 ;
    return 1;
}
