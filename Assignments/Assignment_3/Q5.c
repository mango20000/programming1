//Kobe Pham, 1002281992
#include<stdio.h>

int main(){
    int n;
    char star = '*';
    char space = ' ';
    printf("Please input number of rows(n); ");
    scanf("%d", &n);

    int counter = n;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            printf(" "); 
        }
        for(int j=0;j<=i;j++){
            printf("%c", star);
        }
       printf("\n");
    }
    
    return 0;
}