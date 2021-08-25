// Find first negative element in every window of size k
// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1#
// Aman Kumar

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) 
{
    queue<int> neg ;
    int i, j ;
    
    vector<long long> res ;
    
    for( i = 0, j = 0 ; i < N && j < N ;  )
    {
        // When size of window is k
        if( (j-i) == K )
        {
            if( neg.size() > 0 )
            {
                res.push_back( neg.front() ) ;
            }
            else
                res.push_back( 0 ) ;
            
            if( A[j] < 0)
                neg.push( A[j] ) ;
                
            j++ ;
            
            if( A[i] < 0 && neg.size() > 0 )
                neg.pop() ;
            i++ ;
        
        }
        
        // If window size is < k
        else if( (j-i) < K )
        {
            if( A[j] < 0 )
                neg.push( A[j] ) ;
            j++ ;
        }
        
    
    }
    
    if( neg.size() > 0 )
    {
        res.push_back( neg.front() ) ;
        neg.pop() ;
    }
    else
        res.push_back( 0 ) ;
    
    return res ;
}
