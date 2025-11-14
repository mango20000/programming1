//Kobe Pham, 1002281992
#include <stdio.h>
#include <string.h>

int main(){
    char String_1[10];
    char String_2[10];

    printf("Please enter the first string: ");
    scanf("%s", String_1);
    printf("Please enter the second string: ");
    scanf("%s", String_2);

    int compare; 
    compare = strcmp(String_1, String_2);

    if(compare < 0){
        printf("First string is lexicographically smaller than second.\n");
    }
    else if(compare > 0){
        printf("Second string is lexicographically smaller than first.\n");
    }
    else{
        printf("Both strings are equal.\n");
    }

    return 0;
}