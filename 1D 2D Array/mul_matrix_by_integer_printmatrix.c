#include<stdio.h>
int main(){
    int n,x;
        printf("Enter size of matrix:");
        scanf("%d",&n);
    int A[n][n];
        printf("Enter %d elements in matrix:",n*n);
int sum [n][n];
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            scanf("%d",&A[r][c]);
        }
    }
        printf("Enter integer to multiply matrix:");
        scanf("%d",&x);

        printf("Resultant matrix after multiplication:\n");

    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            printf("%d ",A[r][c]*x);
        }
        printf("\n");
    }
    return 0;       
}
