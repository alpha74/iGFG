// Count pairs who XOR is 0
// https://practice.geeksforgeeks.org/problems/counts-zeros-xor-pairs0349/1
// Aman Kumar

long long int calculate(int a[], int n)
{
    sort( a, a + n ) ;
    
    long long int total = 0 ;
    
    for( int i = 0 ; i < n ; )
    {
        int curr = a[i] ;
        int count = 0 ;
        
        while( a[i] == curr && i < n )
        {
            i++ ;
            count++ ;
        }
        
        if( count > 1 )
            total += ( (count-1) * count)/2 ;
    }
    
    return total ;
}
