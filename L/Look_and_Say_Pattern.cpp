// Look and Say Pattern : Read desc
// https://practice.geeksforgeeks.org/problems/decode-the-pattern1138/1
// Aman Kumar

string lookandsay(int n) 
{
    string curr = "1" ;
    string last = "1" ;

    n-- ;

    while( n > 0 )
    {
        n-- ;
        last = curr ;

        int i = 0 ;
        int len = curr.length() ;
        curr = "" ;

        char c = 'x' ;
        int count = 0 ;

        for( ; i < len ; )
        {
            c = last[i] ;

            count = 0 ;
            // Count occurence of curr
            while( last[i] == c && i < len)
            {
                count++ ;
                i++ ;
            }

            curr += to_string(count) ;
            curr += c ;
        }

    }
    return curr ;
}   
