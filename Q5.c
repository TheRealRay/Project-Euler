#include <stdio.h>
//Problem solved through math.
/*
int main(void){
	//The smallest number should be divisible by all the primes from 1-20, starting from 2;
	//primes are 2, 3, 5, 7, 11, 13, 17, 19
	//So 8 conditions to check each time. Looking for the smallest, start from the bottom.  
	//bare minimum start is 2520, 

	//Find LCM
	long int smallest = 17 * 19 * 13 * 11 * 5 * 7 * 3 * 3 * 2 * 2 * 2 * 2; 
	//Find when the primes appear the most in the range.    
	//2, 4 times in 16, 3, 2 times in 9, 5, 5 once, 7 once. all others once. Therefore,
	//smallest = 2^4 * 3^2 * 5 * 7 * smallest
	printf("%ld\n", smallest);


	
	return 0;
}
*/
//Algorithm for larger ranges.   
int main (void){
	//The exponent of the primes is determined by the greatest perfect powers in the range. K is the range
	//exponent = floor( log(k) / log(prime) ).
	//only need to evaluate exponent for prime ≤ sqrt(k), else is 1.



	
	return 0;
}