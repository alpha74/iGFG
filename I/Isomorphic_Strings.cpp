// Find if two given strings are ismorphic
// https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1#
// Aman Kumar

bool areIsomorphic(string str1, string str2)
{
    /*
        TC:
            pijthbsfy fvladzpbf 0
            aitg dphc 1
            xudzhi ftakcz 1
            abcd wssg 0
    */
    int mapping[28] = {0} ;
    int mapping2[28] = {0} ;

    if( str1.length() != str2.length() )
        return false;

    bool ret = true ;
    for( int i = 0 ; i < str1.length() && ret == true ; i++ )
    {
        if( mapping[ str1[i] - 'a'+1 ] == 0 )
        {
            // If curr element in str2 is not already mapped
            if( mapping2[ str2[i] -'a' +1 ] == 0 )
            {
                mapping[ str1[i] - 'a'+1 ] = (str2[i] - 'a' +1) ;
                mapping2[ str2[i] -'a' + 1 ] = int( str1[i] - 'a' + 1 ) ;
            }
            else
                ret = false ;
        }
        else if( mapping[ str1[i] -'a'+1] != 0 )
        {
             if( (str2[i] - 'a' +1) != mapping[ str1[i] - 'a' +1 ] ) 
                ret = false ;
        }
        else
            return false ;


    }
    return ret ;
}
