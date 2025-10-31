#include<stdio.h>
int main(){
    int n;
        printf("Enter size of matrix:");
        scanf("%d",&n);
    int A[n][n];
        printf("Enter %d elements in matrix:\n",n*n);
    int r,c;
        for(r=0;r<n;r++){
            for(c=0;c<n;c++){
                scanf("%d",&A[r][c]);
            }
        }
    int smallest =A[0][0];
        for(r=0;r<n;r++){
            for(c=0;c<n;c++){
                if(A[r][c]< smallest)
                    smallest=A[r][c];
            }
        }

        printf("smallest of matrix=%d",smallest);
}