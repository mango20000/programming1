//Kobe Pham, 1002281992
#include<stdio.h>

int main(){
    int number1;
    int number2;
    int number3;
    printf("please enter 3 integers: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    //printf("%d, %d, %d \n", number1, number2, number3);

    if(number1 >= number2 && number3){
        printf("The highest number is: %d\n", number1);
    }
    else if(number2 >= number1 && number3){
        printf("The highest number is: %d\n", number2);
    }
    else if(number3 >= number1 && number2){
        printf("The highest number is: %d\n", number3);
    }

    return 0;
}