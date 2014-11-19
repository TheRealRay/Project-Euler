#include <stdio.h>

#include <math.h>
int isPrime(int i);
int main(void){
	//sieve of Eratosthenes

	//Prime should be odd, since 2 is the only prime.
	//Doesn't end in 5, sum of the digits should not equal a multiple of 3	
	//p = 6k±1 for p>3, and k is a natural number.  
	//13 = 6k+1;
	//11 = 6k-1; k = 2
	//7 = 6k+1; k = 1
	//5 = 6k-1;
	
	int count = 1;//include 2 first
	int targetcount = 10001;
	int prime; 	

	for (prime=1;count<targetcount;){
		prime+=2;//The iteration should be here, if the iteration was inside the for statement,
		//prime would be increased by 2 at the end of every check, after finding the 10001st prime, 2 would be add
		//giving 2 more than the answer.  
		if(isPrime(prime)){
			count=count+1;
		}
	}
	printf("%d\n", prime);
	printf("%d\n", count);



}
int isPrime(int i){
	int f, r;
	if(i<=1){
		return 0;
	}
	else if(i<4){
		return 1;
	}
	else if(i<9){
		return 1;
	}
	else if(i%3==0){
		return 0;
	}
	else{
		r = (int)floor(sqrt(i));
		f = 5;
		while(f<=r){
			if(i%f==0){
				return 0;
			}
			if(i%(f+2)==0){
				return 0;
			}
			f+=6;
		}

	}
	return 1;
}


