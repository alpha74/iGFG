// Arya's Long string : Read desc
// https://practice.geeksforgeeks.org/problems/aryas-long-string5840/1#
// Aman Kumar

int fun(string s, int k, int n, char c) 
{
    map<int,int> freq ;
    long long int len = s.length() ;

    for( long long int i = 0 ; i < len ; i++ )
    {
        freq[ s[i] ]++ ;
    }

    long long int ret = 0 ;
    if( len*k < n ) 
        n = len * k ;

    ret = (n/len) * freq[ c ] ;


    n = n % len ;
    if( n > 0 )
    {
        for( long long int i = 0 ; i < n ; i++ )
        {
            if( s[i] == c )
                ret++ ;
        }
    }
    return ret ;
}
