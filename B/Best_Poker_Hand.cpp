// Return best poker hand from given input
// https://leetcode.com/problems/best-poker-hand/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 10.3 MB Beats 20.12%
string bestHand(vector<int>& ranks, vector<char>& suits) 
{
    bool flush = false, threekind = false, pair = false, highcard = true ;

    unordered_map<int,int> rankFreq ;
    unordered_map<char,int> suitFreq ;

    for( int i = 0 ; i < ranks.size() ; i++ )
    {
        rankFreq[ ranks[i] ]++ ;

        if(rankFreq[ ranks[i] ] == 2)
            pair = true ;

        if(rankFreq[ ranks[i] ] == 3)
            threekind = true ;
    }    

    for(int i = 0 ; i < suits.size() ; i++ )
    {
        suitFreq[ suits[i] ]++ ;

        if(suitFreq[ suits[i] ] == 5)
            flush = true ;
    }

    if(flush)
        return "Flush" ;

    if(threekind)
        return "Three of a Kind" ;

    if(pair)
        return "Pair" ;

    return "High Card" ;
}
