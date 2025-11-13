#include<stdio.h>
int main(){
    int n;
        printf("Enter size of matrix:");
        scanf("%d",&n);
    int A[n][n];
    int array[n];
    printf("Enter %d elements in matrix:\n",n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
        printf("Enter %d elements in array:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int result[n];
        for(int i=0;i<n;i++){
            result[i]=0;
            for(int j=0;j<n;j++){
                result[i]+= (A[i][j]*array[j]);
            }
        }
            printf("Result:\n");
        for(int i=0;i<n;i++){
            printf("%d ",result[i]);
        }
        printf("\n");
    return 0;

}