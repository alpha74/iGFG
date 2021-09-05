// Check if a number is power of 2
// https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
// Aman Kumar 

bool isPowerofTwo(long long n)
{
    if( n == 0 )
        return false ;

    return !(n & (n-1) ) ;    

}
