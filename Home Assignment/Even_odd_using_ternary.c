#include<stdio.h>
int main(){
    int num;
        printf("Enter a Number:");
        scanf("%d",&num);

    (num%2==0)?printf("%d is Even number",num):printf("%d is Odd number",num);

    return 0;
}