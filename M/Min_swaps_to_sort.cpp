// Min swaps required to sort the array in O(nlogn) time and O(n) space
// https://practice.geeksforgeeks.org/problems/minimum-swaps/1/
// Aman Kumar

int minSwaps(vector<int>&nums)
{
    vector<int> s = nums ;

    sort( s.begin(), s.end() ) ;
    map<int,int> index ;

    for( int i = 0 ; i < s.size() ; i++ )
    {
        index[nums[i]] = i ;
    }

    int count = 0 ;

    for( int i = 0 ; i < s.size() ; i++ )
    {
        if( s[i] != nums[i] )
       {

           count++ ;
           //cout << "\n s[i]: " << s[i] << "  nums[i]: " << nums[i] << " cnt: " << count ;

           // Find the nums[i] correct pos in sorted array
           int temppos = index.find( s[i] ) -> second ;

           // Swap the numbers
           nums[temppos] = nums[i] ;
           index[ nums[i] ] = temppos ;
           nums[i] = s[i] ;

       }
    }

      return count ;
}
