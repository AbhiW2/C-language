#include<stdio.h>
int main(){
    int n;
        printf("Enter a number:");
        scanf("%d",&n);

    int i=1,sum=0;
        while(i<n){
            sum+=i*i;
            i++;
        }
        printf("Sum of square is:%d",sum);
        
        return 0;
}