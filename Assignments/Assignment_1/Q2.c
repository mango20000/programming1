// Kobe Pham, 1002281992

#include <stdio.h>

int main(){

    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("User Entered(decimal): %d \n", x);
    printf("User Entered(octal): %o \n", x);
    printf("User Entered(hexadecimal): %x \n", x);

    return 0;
}