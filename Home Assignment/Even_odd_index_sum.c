#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int evenSum = 0, oddSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sums
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Sum of even-indexed elements = %d\n", evenSum);
    printf("Sum of odd-indexed elements = %d\n", oddSum);

    printf("Difference (even - odd) = %d\n", evenSum - oddSum);

    // Free memory
    free(arr);

    return 0;
}
