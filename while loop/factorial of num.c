#include<stdio.h>
int main(){
    int n;
        printf("Enter a number:");
        scanf("%d",&n);
    int i=1;
    int fact=1;
        while(i<=n){
            fact*=i;
            i++;
        }
    printf("Factorial:%d",fact);

    return 0;


}