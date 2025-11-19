#include <stdio.h>

int main() {
    int month, year;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) {
        printf("31 days\n");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("30 days\n");
    }
    else if (month == 2) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("29 days (Leap Year)\n");
        } else {
            printf("28 days\n");
        }
    }
    else {
        printf("Invalid month number! Please enter between 1-12.\n");
    }

    return 0;
}
