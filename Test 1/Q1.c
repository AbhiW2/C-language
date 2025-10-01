#include<stdio.h>
int main(){
    int score;
        printf("Enter student score(0 to 100):");
        scanf("%d",&score);

    (score>=40) ? printf("Pass \n"):printf("Fail\n");

    (score>=90) ? printf("Excellent!"):printf("Keep Improving!");

    return 0;
}