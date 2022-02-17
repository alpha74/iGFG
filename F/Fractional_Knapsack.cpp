// Fractional Knapsack
// https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1#
// Aman Kumar

/*
struct Item{
    int value;
    int weight;
};
*/

bool sortUnit( Item a, Item b)
{
    return ( (double)a.value / (double)a.weight) > ((double)b.value / (double)b.weight) ;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort( arr, arr+n, sortUnit ) ;
        
        int currW = 0 ;
        double currVal = 0.0 ;
        
        for( int i = 0 ; i < n && currW <= W ; i++ )
        {
            if( currW + arr[i].weight <= W)
            {
                currW += arr[i].weight ;
                currVal += arr[i].value ;
            }
            else
            {
                int diff = W - currW ;
                currVal += arr[i].value * ( (double)diff / (double)arr[i].weight ) ;
                currW += diff ;
            }
        }
        
        return currVal ;
    }
        
};
