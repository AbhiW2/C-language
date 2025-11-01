#include<stdio.h>
int main(){
    int n;
        printf("Enter size of matrix:");
        scanf("%d",&n);
    int A[n][n];
        printf("Enter %d elements in matrix:",n*n);
    int r,c;
        for(r=0;r<n;r++){
            for(c=0;c<n;c++){
                scanf("%d",&A[r][c]);
            }
        }
    int sum =0;
        for(c=0;c<n;c++){
            sum+=A[0][c];
}
        printf("Sum of 0th row:%d\n",sum);
}