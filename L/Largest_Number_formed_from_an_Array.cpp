// Largest Number formed from an Array
// https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1
// Aman Kumar

// Write this comparator function.
bool sortnum( string a, string b )
{
    string ab = a + b ;
    string ba = b + a ;
    
    return ab > ba ;
}

//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	string printLargest(vector<string> &arr) 
	{
	    sort( arr.begin(), arr.end(), sortnum ) ;
	    
	    if( arr[0] == "0" )
	        return arr[0] ;
	        
	    string res = "" ;
	    
	    for( int i = 0 ; i < arr.size() ; i++ )
	        res += arr[i] ;
	        
	   return res ;
	}
};
