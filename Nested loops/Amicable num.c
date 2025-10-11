#include <stdio.h>

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) sum += i;
    }
    return sum;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (sumOfDivisors(a) == b && sumOfDivisors(b) == a) {
        printf("%d and %d are amicable numbers\n", a, b);
    } else {
        printf("%d and %d are not amicable numbers\n", a, b);
    }
    return 0;
}
