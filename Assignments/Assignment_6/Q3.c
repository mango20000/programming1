// Kobe Pham, 1002281992
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char readfile[100];
    char writefile[100];
    char buffer[100];
    FILE *read;
    FILE *write;

    printf("Enter the filename to open for reading: ");
    scanf("%s", readfile);
    printf("Enter the filename to open for writing: ");
    scanf("%s", writefile);

    if((read = fopen("InputFile.txt", "r+")) == NULL 
        || (write = fopen("OutputFile.txt", "w+")) == NULL){

        printf("Can not open file\n");
        exit(1);
    }
    else{
        printf("File opened successfully\n");
    }

    while(fgets(buffer, sizeof(buffer)-1, read)){
        printf("%s", buffer);
        fprintf(write, "%s", buffer);
    }
    printf("\n");

    fclose(read);
    fclose(write);

    return 0;
}