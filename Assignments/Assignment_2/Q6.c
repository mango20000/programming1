//Kobe Pham, 1002281992
#include<stdio.h>

int main(){
    int number;
    printf("Please enter an integer: ");
    scanf("%d", &number);

    if(number > 0){
        printf("The number is positive\n");
    }
    else if(number < 0){
        printf("The number is negative\n");
    }
    else if(number == 0){
        printf("The number is 0\n");
    }

    return 0;
}