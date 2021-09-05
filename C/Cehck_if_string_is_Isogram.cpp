// Check if a string is Isogram or not
// https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not-1587115620/1
// Aman Kumar

bool isIsogram(string s)
{
    int freq[27] = { 0 } ;

    if( s.length() > 26 )
        return false ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( freq[s[i]-'a'] == 0 )
            freq[ s[i] - 'a' ] = 1;
        else
            return false ;
    }
    return true ;
}
