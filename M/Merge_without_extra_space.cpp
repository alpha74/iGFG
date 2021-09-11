// Merge two sorted arrays into one sorted array without using extra space.
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
// Aman Kumar

void merge(int arr1[], int arr2[], int n, int m) 
{
    int i = 0, j = 0, k = n-1 ;


      for( ; i <= k && j < m ; )
      {
          if( arr1[i] < arr2[j] )
          {
              i++ ;
          }
          else
          {
              int temp = arr1[k] ;
              arr1[k] = arr2[j] ;
              arr2[j] = temp ;
              j++ ;

              k-- ;
          }
      }

    sort( arr1, arr1+n) ;
    sort( arr2, arr2+m) ;
}
