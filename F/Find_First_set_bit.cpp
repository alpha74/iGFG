// Find first set bit from right: LSB
// https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1
// Aman Kumar

unsigned int getFirstSetBit(int n)
{
    int index = 0 ;
    for( int i = 0 ; i < 32 && index == 0 ; i++)
    {
        if( i != 0 )
            n = n >> 1 ;

        if( n & 1 == 1 )
            index = i+1 ;
    }

    return index ;
}
