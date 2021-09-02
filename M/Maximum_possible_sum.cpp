// Maximum possible sum : See desc
// https://practice.geeksforgeeks.org/problems/maximum-possible-sum4134/1#
// Aman Kumar

long int returnMaxSum(int A[], int B[], int n)
{
   int i = 0, j = 0 ;

   map<int,bool> hash ;
   long int currsum = 0 ;
   long int maxsum = 0 ;

   // Calculate first window sum.
   bool run = true ;
   while( j < n && run )
   {
       auto iter = hash.find(A[j]) ;

       if( iter == hash.end() )
       {
           hash[A[j]] = true ;
           currsum += B[j] ;
           j++ ;
       }
       else
            run = false ;
   }

   //cout << "\n currsum: " << currsum << "  i:" << i << " j: " << j ;
   maxsum = max( maxsum, currsum ) ;

   for( ; j < n ; )
   {
       auto iter = hash.find( A[j] ) ;

       // If no duplicate till now in curr window
       if( iter == hash.end() )
       {
           hash[ A[j] ] = true ;
           currsum += B[j] ;
           j++ ;

           //cout << "\n nd currsum: " << currsum << "  i:" << i << " j: " << j ;
       }
       // If a duplicate is found
       else
       {
            maxsum = max( maxsum, currsum ) ;

            // Remove the duplicate element in window and sum
            while( A[i] != A[j] )
            {
                currsum -= B[i] ;
                hash.erase( A[i] ) ;
                i++ ;
            }

            currsum -= B[i] ;
            hash.erase( A[i] ) ;
            i++ ;
            //cout << "\n dd currsum: " << currsum << "  i:" << i << " j: " << j ;
       }
   }
   maxsum = max( maxsum ,currsum ) ;

   //cout << "\n" ;
   return maxsum ;
}
