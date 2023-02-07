// Find number of ways that sum of combinations of (3,5,10) will given N
// https://practice.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1
// Aman Kumar

// Method 1
long long int count(long long int n)
{
	if( n == 0 )
	    return 1 ;
	   
	vector<int> arr = { 3, 5, 7  } ;
	
	 int ways = 0 ;
	 
	 int lim3 = ceil(n/3) ;
	 
	 for( int i = 0 ; i <= lim3 ; i++ )
	 {
	     for( int j = 0 ; j <= lim3 ; j++ )
	     {
	         for( int k = 0 ; k <= lim3 ; k++ )
	         {
	             int sum = (3*i) + (5*j) + (10*k) ;
	             
	             if( sum == n )
	                ways++ ;
	         }
	     }
	 }
	 
	 
	 return ways ;
}


// Method 2: O(n) and space O(n)
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

