#include <stdio.h>

int main() {
    int n = 6;
    int arr[] = {1, 2, 4, 5, 6};
    int sum = 0, expectedSum;

    for(int i = 0; i < n-1; i++) {
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("Missing number = %d", expectedSum - sum);

    return 0;
}
