// Rearrange an array with O(1) extra space ( see link )
// https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1
// Aman Kumar

/*
How this can be achieved? 
Let's assume an element is a and another element is b, both the elements are less than n. 
So if an element a is incremented by b*n. 
So the element becomes a + b*n so when a + b*n is divided by n then the value is b and a + b*n % n is a.
*/

 void arrange(long long arr[], int n) 
{
    for( int i = 0 ; i < n ; i++) 
    {
        arr[i] += ( arr[arr[i]] % n ) * n ;
    }

    for( int i = 0 ; i < n ; i++ )
    {
        arr[i] = (arr[i]/n) ;
    }
}
