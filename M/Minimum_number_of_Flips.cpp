// Minimum number of flips
// https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1
// Aman Kumar

int minFlips (string S)
{
    int flip0 = 0, flip1 = 0 ;
    
    // Pattern 10101...
    for( int i = 0 ; i < S.length() ; i++ )
    {
        if( i % 2 == 0 && S[i] == '0' )
            flip0++ ;
        else if( i % 2 != 0 && S[i] == '1' )    
            flip0++ ;
    }
    
    // Pattern 01010...
    for( int i = 0 ; i < S.length() ; i++ )
    {
        if( i % 2 == 0 && S[i] == '1' )
            flip1++ ;
        else if( i % 2 != 0 && S[i] == '0' )    
            flip1++ ;
    }
    
    
    return min( flip0, flip1 ) ;
}
