#include<stdio.h>
int main(){
    int n;
        printf("Enter a number:");
        scanf("%d",&n);
    int i=1,sum=0;
        while(i<n){
            sum+=i;
            i+=2;
        }
        printf("Sum of odd numbers:%d",sum);

        return 0;

}