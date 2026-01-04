#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0, average;

    printf("Enter positive numbers (enter a negative number to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num < 0)
            break;

        sum += num;
        count++;
    }

    if (count > 0) {
        average = sum / count;
        printf("Average of positive numbers = %.2f\n", average);
    } else {
        printf("No positive numbers entered.\n");
    }

    return 0;
}
