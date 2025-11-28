#include<stdio.h>
int main(){
    int n;
        printf("Enter size of matrix:");
        scanf("%d",&n);
    int A[n][n];
    int B[n][n];

  printf("Enter %d elements in A matrix:\n",n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
  printf("Enter %d elements in B matrix:\n",n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
    }
    int result[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                result[i][j]=(A[i][j]*B[i][j]);
            }
        }
        printf("Multiplication of two matrix:\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",result[i][j]);
            }
        printf("\n");
        }
    
return 0;
}