#include <stdio.h>

int main() {
    int a, b, x, y, rem, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (b != 0) {
        rem = a % b;
        a = b;
        b = rem;
    }

    gcd = a;
    lcm = (x * y) / gcd;

    printf("GCD (HCF) = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
