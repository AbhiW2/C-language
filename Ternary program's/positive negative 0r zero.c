#include<stdio.h>
int main(){
    int a;
        printf("Enter a number:");
        scanf("%d",&a);

        (a>0)? printf("Positive:%d",a):
        (a<0)? printf("Negative:%d",a):
                    printf("zero");

        return 0;
}