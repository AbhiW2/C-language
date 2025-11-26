#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int even = 0, odd = 0;
    int *arr;

    printf("Enter size of array: 

    arr = (int *) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements  = %d\n", odd);

  
    free(arr);

    return 0;
}
