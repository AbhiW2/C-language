#include<stdio.h>
int main(){
    int n,i=1;
        printf("enter a number:");
        scanf("%d",&n);
    int sum=0;
    while(i<=n){
        sum +=i;
        i++;

}
printf("%d",sum);
return 0;
}