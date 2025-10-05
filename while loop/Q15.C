#include<stdio.h>
int main(){
    int n,rev=0;
        printf("Enter a number:");
        scanf("%d",&n);
    int i;
        while(i<n){
            rev = rev*10 + n%10;
            n/=10;
        }
        printf("Reversed number is:%d",rev);

        return 0;
}
