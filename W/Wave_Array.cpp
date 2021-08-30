// Return array with Wave form: 1,2,3,4,5 -> 2,1,4,3,5
// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/
// Aman Kumar

void convertToWave(vector<int>& arr, int n)
    {
        sort( arr.begin(), arr.end() ) ;
        
        for( int i = 1 ; i < n ; i += 2 )
        {
            arr[i] ^= arr[i-1] ;
            arr[i-1] ^= arr[i] ;
            arr[i] ^= arr[i-1] ;
        }
    }
