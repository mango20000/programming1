//Kobe Pham, 1002281992
#include<stdio.h>

int total(int test, int assignment, int bench);

int main(){
    
    int test_score;
    int assignment_score;
    int benchmark_score;
    int total_score;
    
    printf("Please enter your class test score(0-100): ");
    scanf("%d", &test_score);
    printf("Please enter your benchmark quiz(0-100): ");
    scanf("%d", &benchmark_score);
    printf("Please enter your assignment(0-100): ");
    scanf("%d", &assignment_score);

    //total_score = test_score * 0.40 + assignment_score * 0.30 + benchmark_score * 0.30;
    total_score = total(test_score, assignment_score, benchmark_score); //practice using call functions
    printf("Final score = %d\n", total_score);

    if(total_score <= 100 && total_score >= 90){
        printf("Letter Grade = A \n");
    }
    else if(total_score <= 89 && total_score >=80){
        printf("Letter Grade = B \n");
    }
    else if(total_score <= 79 && total_score >= 70){
        printf("Letter Grade = C \n");
    }
    else if(total_score <= 69 && total_score >= 60){
        printf("Letter Grade = D \n");
    }
    else if(total_score <= 59 && total_score >= 50){
        printf("Letter Grade = E \n");
    }
    else if(total_score < 50){
        printf("Letter Grade = F \n");
    }

    return 0;
}

int total(int test, int assignment, int bench){
    return(test * .40 + assignment * .30 + bench *.30);
}
