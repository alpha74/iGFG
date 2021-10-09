// Sum of numbers in string
// https://practice.geeksforgeeks.org/problems/sum-of-numbers-in-string-1587115621/1
// Aman Kumar

int findSum(string S)
{
  vector<int> arr ;
  int len = S.length() ;

  int ret = 0 ;
  for( int i = 0 ; i < len ; i++ )
  {
      string num = "" ;
      bool change  = false ;
      while(i<len && S[i] >= '0' && S[i] <= '9')
      {
          change = true ;
          num += S[i] ;
          i++ ;
      }
      if( change )
      {
          ret += stoi(num) ;
      }
  }
  return ret;
}
