#include<stdio.h>
int main(){
    char grade;
        printf("Enter grade:");
        scanf("%c",&grade);

        
        switch(grade){
            case'A':printf("Excellent");break;
            case'B':printf("Very Good");break;
            case'C':printf("Good");break;
            case'D':printf("Average");break;
            case'E':printf("Needs Improvement");break;
            case'F':printf("Fail");break;

            default:printf("Invalid grade entered");
        }
        return 0;
}