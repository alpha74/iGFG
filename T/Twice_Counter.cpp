// Twice counter
// https://practice.geeksforgeeks.org/problems/twice-counter4236/1
// Aman Kumar


class Solution
{
    public:
        int countWords(string list[], int n)
        {
           map<string, int> count ;
           
           for( int i = 0 ; i < n ; i++ )
           {
               count[ list[i] ]++ ;
           }
           
           int twos = 0 ;
           
           for( auto it = count.begin() ; it != count.end() ; it++ )
           {
               if( it -> second == 2 )
                twos++ ;
           }
           return twos ;
        }

};
