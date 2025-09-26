#include<stdio.h>
int main(){
    int a;
        printf("Enter a number:");
        scanf("%d",&a);

    if(a>0)
        printf("Number is positive");
    else if(a<0)
        printf("Number is a negative");
    else if(a==0)
        printf("number is zero");

return 0;

}