// Find first non repeating character in string
// https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1/?company[]=MAQ%20Software&company[]=MAQ%20Software&page=1&query=company[]MAQ%20Softwarepage1company[]MAQ%20Software#
// Aman Kumar

// The code already written on GFG is wrong. The return type is char, but it expects -1 to be returned when no answer.

//Function to find the first non-repeating character in a string.
    int nonrepeatingCharacter(string S)
    {
       map<char,int> hash ;
       
       char ret = '#' ;
       int len = S.length() ;
       
       for( int i = 0 ; i < len ; i++ )
       {
           auto iter = hash.find( S[i] ) ;
           
           if( iter == hash.end() )
                hash[ S[i] ] = 1 ;
            else
                hash[ S[i] ]++ ;
            
       }
       
       for( int i = 0 ; i < len && ret == '#' ; i++ )
       {
           if( hash[ S[i] ] == 1 )
            ret = S[i] ;
       }
       
       if( ret == '#' )
        return -1
       return ret ;
    }
