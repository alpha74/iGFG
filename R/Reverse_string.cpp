// Reverse the given string
// https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// Aman Kumar

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
