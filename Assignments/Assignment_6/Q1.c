//Kobe Pham, 1002281992
#include <stdio.h> 
#include <stdlib.h>

#define MAX 20

int main(){ 
    int num;
    FILE *fp;
    int ar[MAX] = {0, 1};

    fp = fopen("fibonacci.txt", "w");
    for(int i = 0; i < MAX; i++){
      ar[i + 2] = ar[i] + ar[i+1];
      //printf("%d, ", ar[i]); checking to see what prints
      fprintf(fp, "%d", ar[i]);
      fprintf(fp, " ");
    }

    fclose(fp);

    return 0;
}