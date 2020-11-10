// Permutation of a given String
// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;


void backtrack( string &s, int l, int r, vector<string> &res )
{
    if( l == r )
        res.push_back( s ) ;
    
    for( int i = l ; i <= r ; i++ )
    {
        char temp = s[i] ;
        s[i] = s[l] ;
        s[l] = temp ;
        
        backtrack(s,l+1, r, res) ;
        
        temp = s[i] ;
        s[i] = s[l] ;
        s[l] = temp ;
    }
}

void vader()
{
    string s ;
    cin >> s ;
    
    vector<string> res ;
    
    backtrack(s,0,s.length()-1, res) ;
    
    sort( res.begin(), res.end() ) ;
    
    for( int i = 0 ; i < res.size() ; i++ )
    {
        cout << res[i] << " " ;
    }
    
    cout << "\n" ;
}

int main()
{
    int t ;
    cin >> t ;
    
    while(t--) vader() ;
    return 0 ;
}
