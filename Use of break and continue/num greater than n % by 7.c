//Find the first number greater than n that is divisible by 7

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n++;
    while(1) {
        if(n % 7 == 0) {
            printf("First number greater than input divisible by 7 = %d\n", n);
            break;
        }
        n++;
    }
    return 0;
}
