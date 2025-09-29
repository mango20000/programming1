// Kobe Pham, 1002281992

#include <stdio.h>

int main(){
    char c;
    printf("Please Enter a Character: ");
    scanf("%c", &c);
    int x;
    printf("Please Enter an Integer Value: ");
    scanf("%d", &x);
    float f;
    printf("Please Enter Float Value: ");
    scanf("%f", &f);

    printf("the Character that you Entered is: %c \n", c);
    printf("The Integer Value that you Entered is: %d \n", x);
    printf("The Float Value that you Entered is: %f \n", f);

    return 0;
}