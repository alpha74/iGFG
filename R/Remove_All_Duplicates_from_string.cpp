// Remove all duplicates from a given string
// https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1#
// Aman Kumar

string removeDuplicates(string str) 
{
    map<char,bool> hash ;

    if( str == "" || str.length() == 1 )
        return str ;

    hash[ str[0] ] = 1 ;

    int curr = 1 ;

    for( int i = 1 ; i < str.length() ; i++ )
    {
        // If not seen already
        if( hash.find( str[i] ) == hash.end() )
        {
            str[ curr ] = str[ i ] ;
            hash[ str[i] ] = 1 ;
            curr++ ;
        }
    }

    str.erase(curr) ;

    return str ;
}
