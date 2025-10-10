#include<stdio.h>
int main(){
    int i ,j;
    int prime;
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

for(i=2;i<n;i++){
    prime =1;
    for(j=2;j*j<=i;j++){
        if(i%j==0){
            prime =0;
            break;
        }
    }
    if(prime){
        printf("%d\n",i);
    }
}
return 0;
}