//Kobe Pham, 1002281992
#include <stdio.h>
#define ROW 10
#define COL 10

int main(){

    int ar[ROW][COL];

    //populating the  array
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            ar[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("     ");
    //printing number of col
    for(int i = 0; i < COL; i++){
        printf("%5d", i + 1);
    }
    printf("\n");

    printf("     ");
    //printing dashes
    for(int i = 0; i < COL; i++){
        printf("-----");
    }
    printf("\n");

    //printing the array
    for(int i = 0; i < ROW; i++){
        printf("%3d |", i + 1);
        for(int j = 0; j < COL; j++){
            printf("%5d", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}