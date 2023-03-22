// Design a number-index container system
// https://leetcode.com/problems/design-a-number-container-system/submissions/920065118/
// Aman Kumar

// Runtime 530 ms Beats 89.13%
// Memory 185.3 MB Beats 89.13%
class NumberContainers {
public:
    unordered_map<int,int> indexToNumMap ;
    unordered_map<int,set<int>> numToIndexMap ;

    NumberContainers() {
        ;
    }
    
    void change(int index, int number) 
    {
        // Find if any number exists at index
        if(indexToNumMap[ index ] != 0 && indexToNumMap[ index ] != number)
        {
            // Remove the mapping and index from old number
            numToIndexMap[ indexToNumMap[index] ].erase( index ) ;
        }

        indexToNumMap[ index ] = number ;
        numToIndexMap[ number ].insert( index ) ;
    }
    
    int find(int number) 
    {
        int ret = -1 ;
        if( numToIndexMap.find( number ) != numToIndexMap.end() )
        {
            if( numToIndexMap[ number ].size() > 0 )
                ret = *( numToIndexMap[ number ].begin() ) ;
        }

        return ret ;
    }
/*
["NumberContainers","change","find","change","find","find","find"]
[[],[1,10],[10],[1,20],[10],[20],[30]]
*/
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
