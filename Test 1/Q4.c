#include<stdio.h>
int main(){
    int n,i,num=1;
        printf("Enter number:");
        scanf("%d",&n);
    int j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num ++;
        }
    
    printf("\n");
    }
return 0;

}