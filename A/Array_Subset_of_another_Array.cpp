// Array subset of another array
// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1#
// Aman Kumar

string isSubset(int a1[], int a2[], int n, int m) 
{
    map<int,int> hash1 ;
    
    for( int i = 0 ; i < n ; i++ )
    {
        hash1[ a1[i] ]++ ;
    }
    
    map<int,int> hash2 ;
    
    for( int i = 0 ; i < m ; i++ )
    {
        hash2[ a2[i] ]++ ;
    }
    
    bool ret = true ;
    
    auto iter2 = hash2.begin() ;
    
    for( ; iter2 != hash2.end() && ret ; iter2++ )
    {
        auto iter = hash1.find( iter2 -> first ) ;
        
        if( iter != hash1.end() && iter -> second == iter2 -> second )
            ;
        else
            ret = false ;
    }
    
    if( ret )
        return "Yes" ;
    else    
        return "No" ;
}
