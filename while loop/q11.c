#include<stdio.h>
int main(){
    int n;
        printf("enter a number:");
        scanf("%d",&n);
    int i=1;

        while(i>=n){
            if(i%3==0 && i%5==0)
                printf("Epic combo!");
            else if(i%2==0 && i%3==0)
                printf("FizzTwos!");
            else if(i%5==0)
                printf("Buzz deep!");
            else if(i%3==0)
                printf("fizz!");
            else
                printf("Chill!");
            i--;

        }
        return 0;
}