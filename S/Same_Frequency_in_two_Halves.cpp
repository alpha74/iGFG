// Check if two halves in string have same char with same freq
// https://practice.geeksforgeeks.org/problems/riyas-test1450/1
// Aman Kumar

bool passed (string s) 
{
    int charc[27] = { 0 } ;
    int len = s.length() ;

    for( int i = 0 ; i < len/2 ; i++ )
    {
        charc[ s[i] -'a']++ ;
    }

    int i = (len/2) + (len%2) ;

    for( ; i < len ; i++ )
    {
        charc[ s[i] -'a']-- ;
    }

    bool ret = true ;
    for( i = 0 ; i < 27 && ret ; i++ )
    {
        if( charc[i] != 0 )
            ret = false ;
    }
    return ret ;
}
