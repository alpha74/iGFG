// Run length encoding for a string
// https://practice.geeksforgeeks.org/problems/run-length-encoding/1
// Aman Kumar

string encode(string src)
{    
    string ret = "" ;
    for( int i = 0 ; i < src.length() ; i++ )
    {
        char curr = src[i] ;
        int j = 0 ;
        int count = 1 ;
        
        for( j = i+1 ; j < src.length() && src[i] == src[j] ; j++ )
        {
            count++ ;
        }
        i = j-1 ;
    
        ret += curr ;
        ret += to_string( count ) ;
    }
    
    return ret ;
}   
