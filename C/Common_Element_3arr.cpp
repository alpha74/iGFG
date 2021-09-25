// Common elements in 3 arrays
// https://practice.geeksforgeeks.org/problems/common-elements1132/1
// Aman Kumar

vector<int> common_element(int v1[], int v2[], int n1, int n2)
{
    vector<int> res ;

    int i = 0 ;
    int j = 0 ;
    for( i = 0, j = 0 ; i < n1 && j < n2 ; )
    {
        if( v1[i] == v2[j] )
        {
            res.push_back( v1[i]  );
            i++ ;
            j++ ;
        }

        else if(v1[i] > v2[j])
            j++ ;
        else
            i++ ;
    }

    return res ;
}

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0 ;

    vector<int> ret ;

    ret = common_element( A, B, n1, n2 );

    int temp[ ret.size() ] ;
    copy( ret.begin(), ret.end(), temp ) ;

    ret = common_element( temp, C, ret.size(), n3 ) ;

    // Remove duplicate elements
    set<int> uniq ;

    for( int i = 0 ; i < ret.size() ; i++ )
        uniq.insert( ret[i]);

    // Store uniq elements in vector
    vector<int> uniqel( uniq.size() ) ;
    copy( uniq.begin(), uniq.end(), uniqel.begin() ) ;

    return uniqel ;
}
