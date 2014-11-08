/* Calculate the sum of all multiples of 3 or 5 bellow 1000 */
/* MY WAY
#include <stdio.h>

int main(void){
    int sum=0;
    for (int i=3;i<1000;i++){
        if (i%3==0||i%5==0){
            sum+=i;
        }
    }
    printf("%d\n", sum);
    return 0;
}

*/

//More efficiently done-
#include <stdio.h>

int sumOfdivisible(int n);
int main(void){
    int max = 999;
    printf("%d\n", (sumOfDivisible(3, max)+sumOfDivisible(5, max)-sumOfDivisible(15, max)));
    
    
}
int sumOfDivisible(int n, int target){
    int max = target / n;
    return (n*(max *(max+1))/2);
    //Algorithm to get sum of all multiples of a number, up to a max
    //n is the multiple, 1+2+3+4+...+max = (max+max+1)/2
}
