//Kobe Pham, 1002281992
#include <stdio.h>

int main(){
    int size;
    printf("Please enter size of array: ");
    scanf("%d", &size);

    int ar[size];
    printf("Please enter the elements of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &ar[i]);
        //printf("%d ", ar[i]);
    }

    int odd_counter = 0;
    int even_counter = 0;
    for(int i = 0; i < size; i++){
        if(ar[i] % 2 != 0){
            odd_counter++;
        }
        else{
            even_counter++;
        }
    }
    printf("Total number of odd elements = %d\n", odd_counter);
    printf("Total number of even elements = %d\n", even_counter);

    return 0;
}