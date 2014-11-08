//Find the sum of all the even-valued terms in the Fibonacci sequence which do not exceed four million.
#include <stdio.h>
int main(void){
    
    int first = 0, second = 1;
    int sum=0;
    int next = 0;
    while (next<4000000){
        next = first + second;
        first = second;
        second = next;
        if (next%2==0){
            sum+=next;
        }
    }
    printf("%d\n", sum);
}

//Every THIRD number is EVEN, starting from the second term 1
#include <stdio.h>
int main(void){
    
    int a = 1, b = 1, c;
    int sum=0;
    c = a+b;
    while (c<4000000){
        sum+=c;
        a=b+c;
        b=a+c;
        c=a+b;
    }
    printf("%d\n", sum);
}

//Using recursion! :D
//4*F(n-3)+F(n-6) relationship for every even, third term in sequence, starting from 2,8,34.
//not sure how to use recursion in c right now....


 
 
*/
