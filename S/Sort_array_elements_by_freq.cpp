// Sort array elemts by frequency in decreasing order
// https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

bool sortF( pair<int,int> A, pair<int,int> B )
{
    if( A.second > B.second )
        return true ;

    if( A.second == B.second )
    {
        if( A.first < B.first )
            return true ;
        else
            return false ;
    }
        
    return false ;
}

void vader() 
{
    int n ;
    cin >> n ;
    
    vector<pair<int,int>> arr ;
    map<int,int> freq ;
    
    for( int i = 0 ; i < n ; i++ )
    {
        int temp ;
        cin >> temp ;
        
        freq[ temp ]++ ;
    }
    
    for( auto it = freq.begin() ; it != freq.end() ; it++ )
    {
        arr.push_back( make_pair( it->first, it->second )) ;
    }
    
    sort( arr.begin(), arr.end(), sortF ) ;
    
    // Print arr
    for( int i = 0 ; i < arr.size() ; i++ )
    {
        for( int j = 0 ; j < arr[i].second ; j++ )
            cout << arr[i].first << " " ;
    }
    cout << "\n" ;
}

int main()
{
    int t ;
    cin >> t ;
    
    while( t-- ) vader() ;
    return 0 ;
}
