//Kobe Pham, 1002281992
#include <stdio.h>

int main(){
    int size;
    printf("Please enter size of array: ");
    scanf("%d", &size);

    int ar[size];

    printf("Please enter the elements in the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &ar[i]);
        //printf("%d ", ar[i]);
    }

    int max = ar[0];
    for(int i = 0; i < size; i++){
        if(ar[i] > max){
            max = ar[i];
        }
    }
    printf("Maximum element = %d\n", max);

    int min = ar[0];
    for(int i = 0; i < size; i++){
        if(ar[i] < min){
            min = ar[i];
        }
    }
    printf("Minimum element = %d\n", min);

    return 0;
}