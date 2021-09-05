// The task is to count the number of substrings that start and end with 1
// https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1
// Aman Kumar

long binarySubstring(int n, string a)
{

    int count = 0 ; 

    for( int i = 0 ; i < n ; i++ )
    {
        if( a[i] == '1')
            count++ ;
    }
    return count*(count-1)/2 ;
}
