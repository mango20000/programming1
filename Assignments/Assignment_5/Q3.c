//Kobe Pham, 1002281992
#include <stdio.h>
#define ROW 5
#define COL 5

int main(){
    int ar[ROW][COL];
    int sum = 0;

    printf("The 5X5 array is : \n");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            ar[i][j] = i;
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of 5X5 array is : \n");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            ar[i][j] = j;
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    return 0; 
}