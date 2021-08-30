// Count zeros in array such that all 1s are to left and all 0s are to right
// https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1/
// Aman Kumar

int countZeroes(int arr[], int n) 
{
    int count = 0 ;
    
    for( int i = n-1 ; i >= 0 && arr[i] == 0 ; i-- )
    {
        count++ ;
    }
    return count ;
}
