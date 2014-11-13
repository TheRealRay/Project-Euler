#include <stdio.h>
#include <math.h>
int main(void){
	
	int sumofsquare=0, squareofsum;
	int sum=0, answer;
	for(int i=1;i<=100;i++){
		sumofsquare+=i*i;
		sum+=i;
	}

	squareofsum = sum*sum;

	answer = squareofsum - sumofsquare;
	printf("%d\n", answer);

	return 0;
}