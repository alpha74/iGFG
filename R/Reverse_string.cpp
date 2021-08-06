// Reverse the given string
// https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// Aman Kumar

// Using stack
string reverseWord(string str)
{
    stack<char> stk ;
    
    string ret = "" ;
    
    for( int i = 0 ; i < str.length() ; i++ )
    {
        stk.push(str[i]) ;
    }
    
    while(!stk.empty())
    {
        ret += stk.top() ;
        stk.pop() ;
    }
    return ret ;
}

// In place
string reverseWord(string str)
{
    int len = str.length() ;
    for( int i = 0 ; i < len/2 ; i++ )
    {
        int temp = str[i] ;
        str[i] = str[len-i-1] ;
        str[len-i-1] = temp ;
    }
    return str ;
}
