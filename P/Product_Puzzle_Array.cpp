// Product puzzle array: Read desc
// https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1
// Aman Kumar


vector<long long int> productExceptSelf(vector<long long int>& nums, int n) 
{
long long allprod = 1 ;
int zeros = 0 ;

for( int i = 0 ; i < n ; i++ )
{
    if( nums[i] != 0 )
        allprod *= nums[i] ;
    else
        zeros++ ;
}

vector<long long int> ret ;

if( zeros == 1 )
{
    for( int i = 0 ; i < n ; i++ )
    {
        if( nums[i] == 0 )
            ret.push_back( allprod ) ;
        else
            ret.push_back( 0 ) ;
    }
    return ret ;
}
// If number of zeros is > 1, ans will all 0 array
else if( zeros > 1 )
{
    vector<long long int> ret2(n,0) ;
    return ret2 ;
}

for( int i = 0 ; i < n ; i++ )
{
    if( nums[i] == 0 )
        ret.push_back( allprod ) ;
    else
        ret.push_back(allprod / nums[i]) ;
}

return ret ;
}
