// Check if given array can be Preorder traversal of BST
// https://practice.geeksforgeeks.org/problems/preorder-traversal-and-bst4006/1/
// Aman Kumar

int canRepresentBST(int arr[], int N) 
{
    int root = INT_MIN ;

    stack<int> stk;
    bool ret = true ;

    for( int i = 0 ; i < N && ret ; i++)
    {
        if( arr[i] < root )
            ret = false ;

        while( !stk.empty() && stk.top() < arr[i])
        {
            root = stk.top();
            stk.pop() ;
        }
        stk.push( arr[i]);
    }
    return ret;
}
