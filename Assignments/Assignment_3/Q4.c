// Kobe Pham, 1002281992
#include<stdio.h>

int main(){
    int n;
    char star = '*';
    printf("Please input number of rows(n); ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           printf("%c", star);
       }
       printf("\n");
    }

    return 0;
}