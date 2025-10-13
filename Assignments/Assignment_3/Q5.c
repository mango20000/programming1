//Kobe Pham, 1002281992
#include<stdio.h>

int main(){
    int n;
    char star = '*';
    char space = ' ';
    printf("Please input number of rows(n); ");
    scanf("%d", &n);

    for(int i=n;i>=0;--i){
        printf("%c", space);

        for(int j=0;j<=n;j++){
            for(int k=0;k<=j;k++){
                printf("%c", star);
            }
        }
        printf("\n");
    }
    return 0;
}