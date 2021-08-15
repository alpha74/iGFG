// Count number of bits to be flipped to convert A to B
// https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1
// Aman Kumar

int countBitsFlip(int a, int b)
{
    int x = a ^ b ;

    // Count number of set bits in x
    int count = 0 ;

    while( x > 0 )
    {
        if( x & 1 == 1 )
            count++ ;

        x = x >> 1 ;
    }
    return count ;
}
