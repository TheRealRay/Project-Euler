//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million.


#include <stdio.h>
#include <math.h>

int isPrime (int i);

int main(void){



	long int sum = 2, i;
	for (i=3;i<2000000;i++){
		if(isPrime(i)==1){
			sum+=i;
		}
	}
printf("%ld\n", sum);

}
int isPrime (int i){

	int f, r;
	if(i<=1){
		return 0;
	}
	else if(i%2==0){
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
	//Prime code from Q7


}