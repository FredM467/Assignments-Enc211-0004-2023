#include <stdio.h>

int main() {
    float a, b;
    int start, end, increment;
    printf("Enter the starting temperature in Fahrenheit: ");
    scanf("%d", &start);

    printf("Enter the ending temperature in Fahrenheit: ");
    scanf("%d", &end);

    printf("Enter the increment value: ");
    scanf("%d", &increment);

    a = start;
    b = -1;
    printf("\nFahrenheit   Celsius\n");
    printf("--------------------\n");

    while (a <= end) {
        if ((a > 98.6) && (b < 98.6)) {
            printf("%6.2f degrees F = %6.2f degrees C\n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);
        }

        printf("%6.2f degrees F = %6.2f degrees C\n", a, (a - 32.0) * 5.0 / 9.0);
        b = a;
        a += increment;
    }

    return 0;
}

