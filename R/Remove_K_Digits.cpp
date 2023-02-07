// Remove K digits from a given number string and return minimum number
// https://practice.geeksforgeeks.org/problems/remove-k-digits/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// Aman Kumar

string removeKdigits(string num, int k)
{
    /*
        894111

        8
        8 9
        8 9 -> 8 -> 9 -> _ -> 4
        4 -> _ -> 1 
        1 1 1
    */
    int n = num.size() ;

    stack<char> stk ;

    for( int i = 0 ; i < num.length() ; i++ )
    {
        while( !stk.empty() && k > 0 && stk.top() > num[i] )
        {
            stk.pop() ;
            k-- ;
        }

        if( !stk.empty() || num[i] != '0' )
            stk.push( num[i] ) ;
    }

    while( !stk.empty() && k-- )
        stk.pop() ;

    if( stk.empty() )
        return "0" ;

    while( !stk.empty() ) 
    {
        num[n-1] = stk.top() ;
        n-- ;
        stk.pop() ;
    }

    return num.substr(n) ;
}
