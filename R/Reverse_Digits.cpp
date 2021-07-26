// Reverse the give number
// https://practice.geeksforgeeks.org/problems/reverse-digit0316/1/?company[]=MAQ%20Software&company[]=MAQ%20Software&page=1&query=company[]MAQ%20Softwarepage1company[]MAQ%20Software
// Aman Kumar


long long int reverse_digit(long long int n)
		{
		    long long rev = 0 ;
		    
		    while( n > 0 )
		    {
		        rev = (rev*10) + (n % 10) ;
		        n /= 10 ;
		    }
		    return rev ;
		}
