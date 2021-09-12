// Find first non repeating character in string
// https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1/?company[]=MAQ%20Software&company[]=MAQ%20Software&page=1&query=company[]MAQ%20Softwarepage1company[]MAQ%20Software#
// Aman Kumar

// The code already written on GFG is wrong. The return type is char, but it expects -1 to be returned when no answer.

//Function to find the first non-repeating character in a string.
char nonrepeatingCharacter(string S)
{
    int freq[ 28 ] = { 0 } ;

    for( int i = 0 ; i < S.length() ; i++ )
    {
        freq[ S[i] -'a' ]++ ;
    }

    char ret = '$' ;

   for( int i = 0 ; i < S.length() && ret == '$' ; i++ )
   {
       if( freq[ S[i] -'a'] == 1 )
        ret = S[i] ;
   }

   return ret ;

}
