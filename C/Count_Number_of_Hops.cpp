// Count number of ways to reach n using {1,2,3}
// https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1#
// Aman Kumar

long long countWays(int n)
{
    vector<long long> hash(100001,0) ;

    hash[0] = 1 ;
    hash[1] = 1 ;
    hash[2] = 2 ;

    long long int MOD = 1000000007 ;


    for(int i = 3 ; i <= n ; i++ )
    {
        int sum = (hash[i-1] + hash[i-2] + hash[i-3]) % MOD ;
        hash[i] = sum ;
    }


    return hash[n] % MOD ;
}
