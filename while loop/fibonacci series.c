#include<stdio.h>
int main(){
    int n;
        printf("Enter a number:");
        scanf("%d",&n);
    
    int a=0;
    int b=1;
    int i=1;
    int next;

        while(i<=n){
            printf("%d ",a);
            next=a+b;
            a=b;
            b=next;

            i++;
        }
        return 0;
}