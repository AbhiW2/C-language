#include<stdio.h>
int main(){
    int n,a,b=0,digit;

    printf("Enter a number:");
    scanf("%d",&n);

    a=n;

    while(n>0){
        digit= n%10;
        b = b*10 +digit;
        n = n/10;

    }
    if(b==a)
         printf("palindrome number\n");
    else
        printf("Not palindrome number");

        return 0;
}