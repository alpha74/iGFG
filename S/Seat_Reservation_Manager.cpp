// Design a seat reservation manager
// https://leetcode.com/problems/seat-reservation-manager/description/
// Aman Kumar

// Runtime 390 ms Beats 85.20%
// Memory 147.7 MB Beats 63.96%
class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> minheap ;

    SeatManager(int n) 
    {
        for( int i = 1 ; i <= n ; i++ )
        {
            minheap.push( i ) ;
        }    
    }
    
    int reserve() 
    {
        int minSeat = minheap.top() ;
        minheap.pop() ;  
        
        return minSeat ;
    }
    
    void unreserve(int seatNumber) 
    {
        minheap.push( seatNumber ) ;    
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
