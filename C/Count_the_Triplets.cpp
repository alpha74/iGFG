// Count number of pairs having sum as an element in array
// https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1
// Aman Kumar

int countTriplet(int arr[], int n)
{
    map<int,bool> hash ;

    for( int i = 0 ; i < n ; i++ )
    {
        hash[ arr[i] ] = true ;
    }

    int count = 0 ;

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = i+1 ; j < n ; j++ )
        {
            int sum = arr[i] + arr[j] ;

            if( hash.find( sum ) != hash.end() )
                count++ ;
        }
    }

    return count ;
}
