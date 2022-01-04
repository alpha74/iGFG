// Connect nodes at same level in Binary tree
// https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1
// Aman Kumar

void connect(Node *root)
{
    queue<Node*> stk1, stk2 ;

    stk1.push( root ) ;

    while( !stk1.empty() )
    {

        Node *first = stk1.front() ;
        Node *second = NULL ;

        stk1.pop() ;

        if( first -> left != NULL )
            stk2.push( first -> left );
        if( first -> right != NULL )
            stk2.push( first -> right ) ;

        while( !stk1.empty() )
        {
            second = stk1.front() ;

            if( second -> left != NULL )
                stk2.push( second -> left );
            if( second -> right != NULL )
                stk2.push( second -> right ) ;

            first -> nextRight = second ;
            first = second ;

            stk1.pop() ;
        }
        first -> nextRight = NULL ;

        // Push all stk2 to stk1 
        while( !stk2.empty() )
        {
            stk1.push( stk2.front() ) ;
            stk2.pop() ;
        }

    }

}    
