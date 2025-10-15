// Kobe Pham, 1002281992
#include<stdio.h>

int main(){
    int n;
    char star = '*';
    char space = ' ';
    printf("Please input number of rows(n); ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int j=i-n;j<=0;j++){
            printf("%c", space);
        }
        for(int k=1;k<=i;k++){
            printf("%c", star);
        }
        for(int x=1;x<i;x++){
            printf("%c", star);
        }
       printf("\n");
    }
    return 0;
}