// Swapping pair makes sum equal
// https://practice.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal4142/1#
// Aman Kumar

int findSwapValues(int A[], int n, int B[], int m)
{
      sort(A,A+n);
      sort(B,B+m) ;
      int sumA = 0 ;
      int sumB = 0 ;

      for( int i = 0 ; i < n ; i++ )
          sumA += A[i] ;

      for( int j = 0 ; j < m ; j++ )
          sumB += B[j] ;

      int ret = -1 ;

      // Check if halves are possible
      if( (sumA-sumB) % 2 != 0 )
          return -1 ;

      int target = (sumA-sumB)/2 ;

      for( int i = 0, j = 0 ; i < n && j < m && ret == -1 ; )
      {
          int diff = A[i] - B[j] ;

          if( diff == target )
              ret = 1 ;
          else if( diff < target )
              i++ ;
          else
              j++ ;
      }

      return ret ;
}
