#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print spaces for alignment
        for (j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        num = 1; // first number in a row is always 1

        for (j = 0; j <= i; j++) {
            printf("%4d", num);
            num = num * (i - j) / (j + 1); // calculate next number in row
        }
        printf("\n");
    }

    return 0;
}
