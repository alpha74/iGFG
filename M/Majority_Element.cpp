// Find element which occurs more than N/2 times
// https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
// Aman Kumar

int majorityElement(int a[], int size)
{
    map<int,int> count ;

    int ret = -1 ;

    for( int i = 0 ; i < size ; i++ )
    {
        count[a[i]]++ ;
    }

    auto iter = count.begin() ;

    for( ; iter != count.end() && ret == -1 ; iter++ )
    {
        if( iter -> second > (size/2))
            ret = iter -> first ;
    }
    return ret ;
}
