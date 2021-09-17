// Missing number in array of N-1 elements given numbers from 1-N
// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
// Aman Kumar

int MissingNumber(vector<int>& array, int n) 
{
    int total = 0 ;

    if( n % 2 == 0 )
        total = (n/2) * (n+1) ;
    else
        total = ((n+1)/2) * n ;


    int curr = 0 ;
    for( int i = 0 ; i < n-1 ; i++ )
        curr = curr + array[i] ;

    return total - curr ;
}
