// Reverse squared sum
// https://practice.geeksforgeeks.org/problems/reverse-squared-sum/0
// Aman Kumar

#include <bits/stdc++.h>
using namespace std;

void vader()
{
    int n ;
    cin >> n ;
    
    vector<int> arr(n) ;
    
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }
    
    long long int sum = 0 ;
    
    bool turn = true ;
    
    for(int i = n-1 ; i >= 0 ; i-- )
    {
        if( turn )
            sum = sum + (arr[i] * arr[i]) ;
        else
            sum = sum - (arr[i] * arr[i] );
        
        turn = !turn ;
    }
    cout << sum << "\n" ;
}

int main() 
{
    int t ;
    cin >> t; 
    
    while( t-- ) vader() ;
    return 0 ;
}
