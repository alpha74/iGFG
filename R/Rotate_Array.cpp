// Rotate given array to left by d
// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/?company[]=Amazon&company[]=Amazon&problemType=full&difficulty[]=-1&difficulty[]=0&page=1&sortBy=submissions&query=company[]AmazonproblemTypefulldifficulty[]-1difficulty[]0page1sortBysubmissionscompany[]Amazon#
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

int mac()
{
    int n, d, tempd ; 
    cin >> n >> d ;
    
    tempd = d ;
    
    vector<int> arr(n) ;
    vector<int> rot ;
    
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
        
        if( d > 0 )
            d-- ;
        else
            rot.push_back( arr[i] ) ;
    }
    
    for( int i = 0 ; i < tempd ; i++ )
        rot.push_back( arr[i] ) ;
    
    // Print output
    for( int i = 0 ; i < n ; i++ )
    {
        cout << rot[i] << " " ;
    }
    cout << "\n" ;
}

int main()
{
    int t = 0 ;
    cin >> t ;
    
    while(t--) mac() ;
    return 0 ;
}
