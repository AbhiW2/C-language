//Print numbers from 1 to N, skipping numbers that are divisible by 3

#include <stdio.h>

int main() {
    int N, i;
    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 3 == 0)
            continue;
        printf("%d ", i);
    }

    return 0;
}
