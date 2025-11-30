// Kobe Pham, 1002281992
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int num;

    if((fp = fopen("numbers.txt", "r+")) == NULL){
        printf("Can not open file\n");
        exit(1);
    }
    else{
        printf("File opened successfully\n");
    }

    while(fscanf(fp, "%d", &num) != EOF){
        if(num % 2 == 0){
            printf("%d is even\n", num);
        }
        else{
            printf("%d is odd\n", num);
        }
    }
    
    fclose(fp);

    return 0;
}