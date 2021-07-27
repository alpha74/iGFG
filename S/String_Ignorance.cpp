// Given a string of both uppercase and lowercase alphabets, 
// the task is to print the string with alternate occurrences
// of any character dropped(including space and consider upper and lowercase as same). 

// https://practice.geeksforgeeks.org/problems/string-ignorance/0/
// Aman Kumar


#include <bits/stdc++.h>
using namespace std;

#define STR_SIZE 10001

int porsche()
{
    char A[ STR_SIZE ] ;
    cin.getline( A, STR_SIZE, '\n') ;
    
    map<char,int> freq ;
    
    for( int i = 0 ; i < strlen(A) ; i++ )
    {
        char curr = tolower( A[i] ) ;
        auto iter = freq.find( curr ) ;
        
        if( iter == freq.end() )
        {
            freq[ curr ] = 1 ;
        }
        else
            freq[ curr ]++ ;
            
        // IF freq is odd
        if( freq[ curr ] % 2 != 0 )
            cout << A[i] ;
    }
    cout << "\n" ;
}

int main() 
{
    int t = 0 ;
    cin >> t;
    getchar() ;
    while( t-- ) porsche() ;
}
