#include <stdio.h>

int main() {
    int matrix[2][2];
    int i, j, sum;

    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of each row:\n");
    for(i = 0; i < 2; i++) {
        sum = 0;
        for(j = 0; j < 2; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
