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
    int mul =1;
        for(r=0;r<n;r++){
            mul*=A[r][0];
}
        printf("mul of 1st row:%d\n",mul);
}