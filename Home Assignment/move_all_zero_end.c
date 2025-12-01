#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, count = 0;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &n);


    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    while (count < n) {
        arr[count] = 0;
        count++;
    }

    printf("Array after moving zeros to end:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}
