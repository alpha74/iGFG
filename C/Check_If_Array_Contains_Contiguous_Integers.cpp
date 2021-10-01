// Check if array contains contiguous integers
// https://practice.geeksforgeeks.org/problems/check-if-array-contains-contiguous-integers-with-duplicates-allowed2046/1
// Aman Kumar

bool areElementsContiguous(int arr[], int n)
{
  set<int> num ;

  for( int i = 0 ; i < n ; i++ )
  {
      num.insert( arr[i] ) ;
  }

  bool ret = true ;

  auto iter = num.begin() ;
  int last = *iter ;

  iter++ ;

  for( ; iter != num.end() && ret == true ; iter++ )
  {
      int curr = *iter ;

      if( curr -1 != last )
          ret = false ;

     last = curr ;
  }

  return ret ;
}
