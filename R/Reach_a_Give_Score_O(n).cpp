// Reach a given score in O(n) and space O(n)
// https://practice.geeksforgeeks.org/problems/reach-a-given-score1418/1
// Aman Kumar

ll count(ll n) 
{
    vector<int> hash(1001,0) ;
    
    if( n == 0 )
        return 1 ;
    
    hash[0] = 1 ;
    
    for( int i = 3 ; i <= n ; i++ )
        hash[i] += hash[i-3] ;
    
    for( int i = 5 ; i <= n ; i++ )
        hash[i] += hash[i-5] ;
    
    for( int i = 10 ; i <= n ; i++ )
        hash[i] += hash[i-10] ;
    
    
    return hash[n] ;
}
