// Kobe Pham, 1002281992
#include<stdio.h>

int main(){

    int N;
    int add;
    int add2;
    int sum = 0;
    printf("Please enter the value of N: ");
    scanf("%d", &N);

    while(N >= 0){
        if(N % 2 == 0){
            add = N;
            sum = add + sum;
            //printf("%d, " , add); checking to see all even numbers.
        }
        N--;
    }

    printf("Sum of even numbers between 1 and N: %d \n", sum);

    return 0; 
}