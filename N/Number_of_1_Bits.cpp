// Count number of set bits
// https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
// Aman Kumar

int setBits(int N) 
{
    int count = 0 ;

    while(N)
    {
        if( N & 1 == 1 )
            count++ ;
        N = N >> 1 ;
    }
    return count ;
}
