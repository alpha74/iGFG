// Find common elements from unsorted array
// https://practice.geeksforgeeks.org/problems/common-elements5420/1
// Aman Kumar

vector<int> common_element(vector<int>v1,vector<int>v2)
{
    vector<int> res ;
    sort( v1.begin(), v1.end() ) ;
    sort( v2.begin(), v2.end() ) ;

    int i = 0 ;
    int j = 0 ;
    for( i = 0, j = 0 ; i < v1.size() && j < v2.size() ; )
    {
        if( v1[i] == v2[j] )
        {
            res.push_back( v1[i]  );
            i++ ;
            j++ ;
        }

        else if(v1[i] > v2[j])
        {
            j++ ;
        }
        else
        {
            i++ ;
        }
    }

    return res ;
}
