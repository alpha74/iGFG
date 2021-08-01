// Implement stack using linked list
// https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1/
// Aman Kumar

//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    StackNode *newNode = new StackNode(x) ;
    newNode -> next = top ;
    top = newNode ;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if( top == NULL )
        return -1 ;
    int ret = top -> data ;
    top = top -> next ;
    return ret ;
}
