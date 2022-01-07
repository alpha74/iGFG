// Check if a given string is a valid IPv4 address
// https://practice.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1/
// Aman Kumar

vector<string> splitter( string s, char del )
{
    vector<string> ret ;
    string word = "" ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] == del )
        {
            ret.push_back( word ) ;
            word = "" ;
        }
        else
        {
            word += s[i];
        }
    }

    ret.push_back( word ) ;
    return ret ;
}

int isValid(string s) 
{
    int valid = 1 ;

    // Check for unwanted char
    for( int i = 0 ; i < s.length() && valid == 1 ; i++ )
    {
        if( s[i] == '.' || ( s[i] >= '0' && s[i] <= '9'))
            valid = 1 ;
        else
            valid = 0 ;
    }

    if( valid == 0 )
        return valid ;

    vector<string> p = splitter(s, '.') ;

    // Check if four parts
    if( p.size() != 4 )
        return 0 ;

    for( int i = 0 ; i < 4 ; i++ )
    {
        string curr = p[i] ;

        if( curr.size() == 0 )
            return 0 ;
        if( curr.size() > 1 && curr[0] == '0')
            return 0 ;

        if( curr.length() > 3 )
            return 0 ;

        int curr_val = stoi( curr ) ;
        if( curr_val < 0 || curr_val > 255 )
            return 0 ;
    }

    return valid ;
}
