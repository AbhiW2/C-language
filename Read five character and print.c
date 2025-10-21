#include <stdio.h>

int main() {
    char ch[5]; 
    int i;

    printf("Enter 5 characters: ");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &ch[i]); 
    }

    printf("\nYou entered: ");
    for (i = 0; i < 5; i++) {
        printf("%c ", ch[i]);
    }

    return 0;
}
