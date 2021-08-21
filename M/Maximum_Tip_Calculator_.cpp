// Read problem
// https://practice.geeksforgeeks.org/problems/maximum-tip-calculator2631/1#
// Aman Kumar

bool sort_diff(pair<int,int> p1, pair<int,int> p2 )
{
    if( abs(p1.first-p1.second) > abs(p2.first-p2.second))
        return true ;
    return false ;
}

long long maxTip(int a[], int b[], int n, int x, int y) 
{
    long long money = 0 ;

    int i = 0 ;

    // Sort according to difference
    vector<pair<int,int>> parr ;

    for( int i = 0 ; i < n ; i++ )
    {
        parr.push_back( make_pair(a[i], b[i])) ;
    }

    sort( parr.begin(), parr.end(), sort_diff ) ;

    for( i = 0 ; i < n && ( x > 0 || y > 0 ); i++ )
    {
        int num1 = parr[i].first ;
        int num2 = parr[i].second ;

        if( num1 > num2 )
        {
            if( x > 0 )
            {
                money += num1 ;
                x-- ;
            }
            else if( y > 0 )
            {
                money += num2 ;
                y-- ;
            }
        }
        else
        {
            if( y > 0 )
            {
                money += num2 ;
                y-- ;
            }
            else if( x > 0 )
            {
                money += num1 ;
                x-- ;
            }
        }

    }
    return money ;
}
