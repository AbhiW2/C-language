#include<stdio.h>
int main(){
    int n;
        printf("Enter a size of matrix:");
        scanf("%d",&n);
        int A[n][n],B[n][n],sum[n][n];

    printf("Enter %d elements in  first matrix:\n",n*n);

    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
                scanf("%d",&A[r][c]);
        }
    }
    printf("Enter %d elements in second matrix:\n",n*n);
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
                scanf("%d",&B[r][c]);
        }
    }
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            sum[r][c]=A[r][c]+B[r][c];
        }
    }
    printf("Sum of the two matrices:\n");
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            printf("%d ", sum[r][c]);
        }
        printf("\n");
    }

        return 0;
    }