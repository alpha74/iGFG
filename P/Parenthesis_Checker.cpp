// Check balanced parenthesis
// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
// Aman Kumar

bool ispar(string x)
{
    stack<char> stk ;

    bool ret = true ;

    for( int i = 0 ; i < x.length() && ret == true ; i++ )
    {
        if( x[i] == '(' || x[i] == '{' || x[i] == '[')
            stk.push( x[i] ) ;
        else
        {
            if( stk.empty() )
                ret = false ;
            else
            {
                char top = stk.top() ;
                stk.pop() ;

                if( x[i] == ')' && top != '(' ) 
                    ret = false ;
                if( x[i] == '}' && top != '{' )
                    ret = false ;
                if( x[i] == ']' && top != '[')
                    ret = false ;
            }
        }
    }
    if( !stk.empty() )
        ret = false ;

    return ret ;
}
