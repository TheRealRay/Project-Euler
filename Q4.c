#include <stdio.h>

int palindrome (int i);
int product (int i);
int main(void){
    
    
    int largest;
    for (int i=998001;i>=698896;i--){
        if (palindrome(i)&&product(i)){
            largest = i;
            break;
        }
    }
    
    printf("%d\n", largest);
    
    return 0;
}
int palindrome (int i){
    int reverse=0;
    int number = i;
    while (number!=0){
        reverse = reverse * 10;
        reverse = reverse + number%10;
        number=number/10;
    }
    if (reverse == i){
        return 1;
    }
    else{
        return 0;
    }
}
//836^2 is a 6 digit palindrome, can specify as min
int product (int number){
    int result=0;
    for (int i=999;i>836;i--){
        for (int j=999;j>836;j--){
            if ((i*j)==number){
                result = 1;
                break;
            }
        }
    }
    return result;
}