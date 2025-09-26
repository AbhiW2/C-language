#include<stdio.h>
int main(){
    int a,b,c;
        printf("Enter three numbers:");
        scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
        printf("Three numbers are equal");
        else if(a>=b && a>=c)
            printf("Number a is larger=%d",a);
        else if(b>=c && b>=a)
            printf("Number b is larger=%d",b);
        else 
            printf("Number c is larger=%d",c);
        
        return 0;
}