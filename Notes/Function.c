#include<stdio.h>

double calc(double width, double len){
    return width * len;
}

int main(){
    double width, len, area;
    printf("Enter width: ");
    scanf("%lf", &width);
    printf("Enter length: ");
    scanf("%lf", &len);

    area = calc(width, len);

    printf("area = %lf\n", calc(width, len));
    printf("area = %lf\n", area);

    return 0;
}