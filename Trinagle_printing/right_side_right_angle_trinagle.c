// #include<stdio.h>
// int main(){
//     int n,i,j;
//         printf("Enter a number:");
//         scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=i;j<=n;j++)
//             printf("  ");
//     for(j=1;j<=i;j++)
//         printf("%d ",j);
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n,i=1;
        printf("Enter a number:");
        scanf("%d",&n);
    while(i<=n){
        int j=1;
            while(j<=n){
                printf("  ");
            while(j<=i){
                printf("%d",j);
                j++;
            }
            printf("\n");
             i++;
        }
         i++;
        }
    return 0;
}