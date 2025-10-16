//Print numbers from 1 to N, but skip those that end in 5 using continue

#include <stdio.h>

int main() {
    int N, i;
    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 10 == 5)
            continue;
        printf("%d ", i);
    }

    return 0;
}
