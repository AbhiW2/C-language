#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.", num);
        return 0;
    }
 int i = 2, prime = 0;
    while (i <= num / 2) {
        if (num % i == 0)
            prime = 1;
        i++;
    }

    if (prime == 0)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}
