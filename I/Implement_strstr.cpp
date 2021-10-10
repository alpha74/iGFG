// Implement strstr
// https://practice.geeksforgeeks.org/problems/implement-strstr/1
// Aman Kumar

int strstr(string s, string x)
{
    int slen = s.length() ;
    int xlen = x.length() ;
     
    int ret = -1 ;
    
    for( int i = 0 ; i < slen && ret == -1 ; i++ )
    {
        int start = i ;
        int k = i ;
        for( int j = 0 ; j < xlen && s[k] == x[j] && ret == -1 ;  )
        {
            if(j == xlen-1)
                ret = start ;
            k++ ;
            j++ ;
        }
    }
     
    return ret ;
}
