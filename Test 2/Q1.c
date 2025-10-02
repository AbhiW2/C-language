#include<stdio.h>
int main(){
    int amount;
        printf("Enter amount in rupees:");
        scanf("%d",&amount);

    if(amount<50)
        printf("The discount is 0%%");
    else if(amount>=50 && amount<=100)
        printf("The discount is 10%%");
    else if(amount>=101 && amount<=200)
        printf("The discount is 20%%");
    else if(amount>200)
        printf("The discount is 30%%");
        
        return 0;
}