#include<stdio.h>
int main(){
    int n,i,num,result;
        printf("Enter a number:");
        scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<=num;i++){
        scanf("%d",&num);
         if(i%2==0)
            result -=num;
        else
            result +=num;
    }
    printf("The calculation is=%d",result);

    return 0;
}
