// Kobe Pham, 1002281992

#include <stdio.h>

int main(){

    int Num1;
    int Num2;
    printf("Enter the first number : ");
    scanf("%d", &Num1);
    printf("Enter the second number: ");
    scanf("%d", &Num2);

    int add, sub, mul, rem;

    add = Num1 + Num2;
    sub = Num1 - Num2;
    mul = Num1 * Num2;
    rem = Num1 % Num2;

    printf("Number1 + Number2 = %d \n", add);
    printf("Number1 - Number2 = %d \n", sub);
    printf("Number1 * Number2 = %d \n", mul);
    printf("Number1 %% Number2 = %d \n", rem);

    return 0;
}