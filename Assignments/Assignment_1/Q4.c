// Kobe Pham, 1002281992

#include <stdio.h>

int main(){

    float len, width;
    printf("Please enter the length of a rectangle: ");
    scanf("%f", &len);
    printf("Please enter the width of a rectangle: ");
    scanf("%f", &width);

    float area = len * width;
    float per = 2 * (len + width);

    printf("The area of the rectangle = %.2f \n", area);
    printf("The perimeter of the rectangle = %.2f \n", per);

    return 0;
}