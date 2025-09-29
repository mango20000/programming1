// Kobe Pham, 1002281992

#include <stdio.h>

int main(){

    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    float cir = 2 * 3.14 * radius;

    printf("Area of the Circle = %.2f \n", area);
    printf("Circumference of circle = %.2f \n", cir);

    return 0;
}