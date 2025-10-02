#include<stdio.h>
int main(){
    int n;
        printf("Enter a number:");
        scanf("%d",&n);
    int i;
        for(i=1;i<=n;i++){

            if(i%2==0 && i%4==0)
                printf("%d ->Even and multiple of 4\n",i);
             else if(i%2==0)
                printf("%d ->Even but not multiple of 4\n",i);
            else if(i%2==1)
                printf("%d ->Odd\n",i);
        }
        return 0;

}