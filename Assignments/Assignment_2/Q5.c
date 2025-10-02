//Kobe Pham, 1002281992
#include<stdio.h>

int main(){
    int number;
    printf("Please enter an integer: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("The number is Even\n");
    }
    else{
        printf("The number is Odd\n");
    }

    return 0;
}