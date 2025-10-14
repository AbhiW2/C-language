//Find the smallest divisor of a number greater than 1 using break

#include<stdio.h>
int main(){
    int n;
        printf("Enter a number:");
        scanf("%d",&n);
    int i;
        for(i=2 ;i<n;i++){
            if(i%2==0){
                printf("smallest divisor of number>1:%d",i);
                break;
    
            }
        }
        return 0;
}