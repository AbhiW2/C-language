#include<stdio.h>
int main(){
    char op;
    int a,b;
        printf("Enter a arithmetic operations:");
        scanf("%c",&op);
        printf("Enter two number:");
        scanf("%d %d",&a,&b);

        switch(op){
            case'+':printf("Result=%d",a+b);break;
            case'-':printf("Result=%d",a-b);break;
            case'*':printf("Result=%d",a*b);break;
            case'/':
                if(b!=0)
                    printf("Result=%d",a/b);
                else
                    printf("Division is not allowed");break;

            default:printf("Invalid operator");

        }
        return 0;
}