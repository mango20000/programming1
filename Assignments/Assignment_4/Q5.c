//Kobe Pham, 1002281992
#include <stdio.h>
#include <string.h>

int main(){
    char s[26];
    int vowel_counter = 0;
    int consonant_counter = 0;
    printf("Please enter a string: ");
    scanf("%s", s);

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || 
           s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
           s[i] == 'u' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y'   ){
            vowel_counter++;
           }
        else{
            consonant_counter++;
        }
    }

    printf("Total number of vowel = %d\n", vowel_counter);
    printf("Total number of consonant = %d\n", consonant_counter);
}