//Kobe Pham, 1002281992
#include <stdio.h>

int main(){
    int n;
    int start = 1;
    printf("Please input number of rows: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           printf("%d ", start);
           start++;
       }
       printf("\n");
    }

    return 0;
}