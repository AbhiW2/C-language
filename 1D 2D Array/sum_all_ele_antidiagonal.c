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
    int sum =0;
        for(r=0;r<n;r++){
            sum+=A[r][n-1-r];
}
        printf("Sum of anti-diagonal=%d\n",sum);
}