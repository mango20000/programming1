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

    //printing the array
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            printf("%3d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}