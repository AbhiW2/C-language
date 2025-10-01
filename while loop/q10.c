#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int i=1;
    int j=1;
        while(i<=n){
            while(j<=i){
                printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
        return 0;
    }