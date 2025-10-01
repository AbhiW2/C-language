
#include <stdio.h>

int main() {
    int n;
    printf("Enter number N: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        printf("%d", i);
        if (i > 1)
            printf("-");
    }
    
    return 0;
}
