// There are given N ropes of different lengths, we need to connect these ropes into one rope. 
// The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.
// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#
// Aman Kumar

long long minCost(long long arr[], long long n) 
{
    priority_queue<long long, vector<long long>, greater<long long>> pq ;

    for( int i = 0 ; i < n ; i++ )
    {
        pq.push( arr[i] ) ;
    }

    long long minsum = 0 ;


    while( pq.size() > 1 )
    {
        long long curr = 0 ;

        curr += pq.top() ;
        minsum += pq.top() ;
        pq.pop() ;

        curr += pq.top() ;
        minsum += pq.top() ;
        pq.pop() ;

        pq.push( curr ) ;
    }

    return minsum ;
}
