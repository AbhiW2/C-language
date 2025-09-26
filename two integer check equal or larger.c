#include<stdio.h>
int main(){
    int a,b;
        printf("Enter two number:");
        scanf("%d%d",&a,&b);

    if(a>b)
        printf("A is larger");
    else if(b>a)
        printf("B is larger");
    else if(a==b)
        printf("number are equal");
return 0;
}