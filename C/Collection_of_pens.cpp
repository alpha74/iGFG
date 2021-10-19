// Collection of pens : Read desc
// https://practice.geeksforgeeks.org/problems/collection-of-pens1843/1
// Aman Kumar

bool isPrime(int n)
{
    bool ret = true ;

    for( int i = 2 ; i*i <= n && ret ; i++ )
    {
        if( n % i == 0 )
            ret = false ;
    }
    return ret ;
}

int minThirdPiles(int A, int B)  
{
    int sum = A+B ;

    bool found = false ;

    while( !found )
    {
        sum++ ;
        found = isPrime(sum) ;
    }
    return sum -(A+B);
}
