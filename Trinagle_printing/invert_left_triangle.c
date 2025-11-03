/** #include<stdio.h>
int main(){
    int n,i,j;
        printf("Enter a number:");
        scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
    printf("\n");
}
return 0;
}**/

#include<stdio.h>
int main(){
    int n,i,j;
        printf("Enter a number:");
        scanf("%d",&n);
    while(i>=1){
        while(j<=i){
            printf("%d",j);
            j++;
        }
        printf("\n");
        i--;
    }
return 0;
}