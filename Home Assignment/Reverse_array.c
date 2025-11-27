#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

  
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print in reverse
    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}
