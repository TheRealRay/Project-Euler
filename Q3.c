//Find the largest prime factor of a composite number
#include <stdio.h>
#include <math.h>
void largestPrime(long long int number);
int main(void){
	long long int x = 600851475143;
	largestPrime(x);
}

void largestPrime(long long int number){
	long long int divisor = 2;
	long long int lastDivisor;
	//Treat 2 seperately, increase factor by 2 each step
	if (number%divisor==0){
		number = number/divisor;
		lastDivisor = divisor;
		while (number%divisor==0){
			number/=divisor;
		}
	}
	else{
		lastDivisor = 1;
	}
	divisor = 3;
	long int limit = (long int)sqrtl((long double)number);

    while (number>1&&divisor<=limit){
        if (number%divisor==0){
            number/=divisor;
            lastDivisor=divisor;
            while (number%divisor==0){
            	number/=divisor;
            }
            limit = (long int)sqrtl((long double)number);
        }
        divisor=divisor + 2;
    }

    if(number==1){
    	printf("%lld\n", lastDivisor);
    }
    else{
    	printf("%lld\n", number);
    }
    //Every number can have at most one prime factor greater than the square root of n, use square root as upper limit.
    //Completely divide out each K, before incrementing K, each K must be a prime factor. 
    //The number will end up as 1. The largest divisor will end up being the largest prime. 
    //Increment up by 2, since 2 IS THE ONLY EVEN PRIME NUMBER. 
}