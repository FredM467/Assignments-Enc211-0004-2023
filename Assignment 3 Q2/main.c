#include <stdio.h>

int main(void) {
    float start, end, increment;

    printf("Enter starting temperature in Fahrenheit: ");
    scanf("%f", &start);

    printf("Enter ending temperature in Fahrenheit: ");
    scanf("%f", &end);

    printf("Enter temperature increment: ");
    scanf("%f", &increment);

    printf("\n%15s %20s\n", "Fahrenheit", "Celsius");
    printf("---------------------------------\n");

    float fahrenheit = start;
    while (fahrenheit <= end) {
        float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%15.2f %20.2f\n", fahrenheit, celsius);
        fahrenheit += increment;
    }

    return 0;
}
