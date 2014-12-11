//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.
#include <stdio.h>
#include <math.h>
int main(void){
	//a^2 + b^2 = c^2
	//c<(a+b) while c>a and c>b
	//a,b,c all less than 1000;
	int sum = 12; // 3 + 4 + 5
	int a, b, c;
	int sa, sb, sc;
	int A, B, C;
	//Could just find the square of elements and see if some element + another = the last one.  
	for ( a = 3;a<1000;a++){
		for (b = a + 1;b<1000;b++){
			for (c = b + 1;c<990;c++){
				sa = a*a;
				sb = b*b;
				sc = c*c;
				if (sc == (sa + sb)){
					sum = a + b + c;
					if (sum == 1000){
						A = a;
						B = b;
						C = c;
						break;
					}
				}
			}
		}
	}
	printf("%d - %d - %d\n", A, B, C);
	printf("%d\n", A * B * C);
}