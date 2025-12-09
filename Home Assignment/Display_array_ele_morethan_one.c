#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int freq[100] = {0};  // Assuming array elements < 100

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    printf("Elements that occur more than once: ");

    // Display elements with count > 1
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
