// Check if 2 numbers exists whose difference in N
// https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1
// Aman Kumar

bool findPair(int arr[], int size, int n)
{
    map<int,bool> hash ;
    
    bool ret = false ;
    
    for( int i = 0 ; i < size && ret == false ; i++ )
    {
        hash[ arr[i] ] = true ;
    }
    
    for( int i = 0 ; i < size ; i++ )
    {
        int num1 = arr[i] + n ;
        int num2 = arr[i] - n ;
        
        if( hash.find(num1) != hash.end() )
            ret = true ;
        else if( hash.find( num2 ) != hash.end()  )
            ret = true ;
    }
    
    return ret ;
}
