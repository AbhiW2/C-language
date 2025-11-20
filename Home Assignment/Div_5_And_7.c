// If it is divisible by 5 and 7 print - Hello world els print - Bye.

#include<stdio.h>
int main(){
    int n;
        printf("Enter a number:");
        scanf("%d",&n);
    
    if(n%5==0 && n%7==0){
        printf("Hello world..!");
    }else{
        printf("Bye.....!");
    }
return 0;
}
