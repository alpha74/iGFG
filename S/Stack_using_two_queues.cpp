// Stack using two Queues
// https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1
// Aman Kumar


/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
    q1.push( x ) ;
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    // If no element
    if( q1.size() == 0 )
        return -1 ;
        
    // If one element
    if( q1.size() == 1 )
    {
        int ret = q1.front() ;
        q1.pop() ;
        return ret ;
    }
    
    // If multiple elements
    while(q1.size() > 1 )
    {
        q2.push( q1.front() ) ;
        q1.pop() ;
    }
    
    int ret = q1.front() ;
    q1.pop() ;
    
    while( !q2.empty() )
    {
        q1.push( q2.front() ) ;
        q2.pop() ;
    }
    return ret ;
}
