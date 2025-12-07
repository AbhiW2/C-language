#include <stdio.h>

int main() {
    int m, n;


    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], Add[m][n], Sub[m][n];

    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            Add[i][j] = A[i][j] + B[i][j];
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }


    printf("\nAddition of matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", Add[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSubstraction of matrices (A - B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", Sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
