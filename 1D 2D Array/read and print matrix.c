#include<stdio.h>
int main(){
    int n;
        printf("Enter a size of matrix:");
        scanf("%d",&n);
        int A[n][n];
        printf("Enter %d elements in matrix:",n*n);
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
                scanf("%d",&A[r][c]);
        }
    }
        printf("Matrix:\n");
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                printf("%d ",A[r][c]);
        }
        printf("\n");
    }
        return 0;
    }