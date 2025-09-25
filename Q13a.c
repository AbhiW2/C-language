#include<stdio.h>

int main(){
    int x,y,result;
        printf("Enter two number:");
        scanf("%d %d ",&x,&y);

    result=x*x*x + 3*x*x + 4*x - y*y*y;

        printf("Result %d\n",result);

    return 0;
}