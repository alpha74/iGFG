// Count occurences of pattern in string
// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
// Aman Kumar


bool compare( char a[27], char b[27])
{
    bool ret = true ;
    
  // Compare freq of each char in both arrays
    for( int i = 0 ; i < 27 && ret ; i++ )
    {
        if(a[i] != b[i])
            ret = false ;
    }
    return ret ;
}


int search(string pat, string txt) 
{
    int count = 0 ;
    // For storing counts of each alphabet
    char patf[27] = {0} ;
    char txtf[27] = {0} ;
    int patl = pat.length(), txtl = txt.length() ;

    for( int i = 0 ; i < patl ; i++ )
    {
        patf[ pat[i] - 'a' ]++ ;
        txtf[ txt[i] - 'a' ]++ ;
    }

    for( int i = patl; i < txtl ; i++ )
    {

        if( compare(patf, txtf) )
            count++ ;

        // Add one char from right in window
        txtf[ txt[i] - 'a']++ ;
        // Remove one char from left in window
        txtf[ txt[i-patl] - 'a']-- ;

    }
    if( compare(patf, txtf) )
          count++ ;

    return count ;
}
