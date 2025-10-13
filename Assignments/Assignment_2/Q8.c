//Kobe Pham, 1002281992
#include<stdio.h>

int main(){
    
    int quarter = 25;
    int quarters;
    int dime    = 10;
    int dimes;
    int nickle  = 5;
    int nickles;
    int penny   = 1;
    int pennies; 
    int num;

    printf("Enter the amount for which change must be created: ");
    scanf("%d", &num);

    if(num >= quarter){
        quarters = num / quarter;
        printf("%d quarter(s), ", quarters);
    }
    else{
        printf("0 quarter(s), ");
    }

    num = num % quarter;

    if(num >= dime){
        dimes = num / dime;
        printf("%d dime(s), ", dimes);
    }
    else{
        printf("0 dime(s), ");
    }

    num = num % dime;

    if(num >= nickle){
        nickles = num / nickle;
        printf("%d nickle(s), ", nickles);
    }
    else{
        printf("0 nickle(s), ");
    }

    num = num % nickle;

    if(num >= penny){
        pennies = num / penny;
        printf("and %d penny(ies)\n", pennies);
    }
    else{
        printf("and 0 penny(ies)\n");
    }

    return 0;
}