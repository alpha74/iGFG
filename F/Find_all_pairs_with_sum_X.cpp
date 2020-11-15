// Find all pairs in array whose sum is X
// https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x/0
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

void vader() 
{
    int n1, n2, x ;
    cin >> n1 >> n2 >> x ;
    
    map<int,int> f1, f2 ;
    vector<int> arr1, arr2 ;
    
    for( int i = 0 ; i < n1 ; i++ )
    {
        int temp ;
        cin >> temp ;
        f1[ temp ]++ ;
        arr1.push_back( temp ) ;
    }
    
    vector<pair<int,int>> ans ;
    
    for( int i = 0 ; i < n2 ; i++ )
    {
         int temp ;
         cin >> temp ;
         f2[ temp ]++ ;
         arr2.push_back( temp ) ;
    }
    

    if( arr1.size() < arr2.size() )
    {
        for( int i = 0 ; i < arr1.size() ; i++ )
        {
            int diff = x - arr1[i] ;
            
            
            if( f2[diff] > 0 )
            {
                ans.push_back( make_pair( arr1[i], diff )) ;
                f2[ diff ]-- ;
            }
        }
        
    }
    else
    {
        for( int i = 0 ; i < arr2.size() ; i++ )
        {
            int diff = x - arr2[i] ;
            
            if( f1[ diff ] > 0 )
            {
                ans.push_back( make_pair( diff, arr2[i] ) ) ;
                f1[ diff ]-- ;
            }
        }
    }
    
    bool flag = false ;
    
    if( ans.size() == 0 )
        cout << "-1" ;
    else
    {
        sort( ans.begin(), ans.end() ) ;
        // Print pairs
        for( int i = 0 ; i < ans.size() ; i++ )
        {
            flag = true ;
            cout << ans[i].first << " " << ans[i].second ;
            
            if( i != ans.size()-1 )
                cout << ", " ;
        }
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
