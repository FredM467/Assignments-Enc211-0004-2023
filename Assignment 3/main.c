
#include <stdio.h>

int main(void) {
    float start, end, increment;

    // Accepting input values
    printf("Enter starting temperature in Fahrenheit: ");
    scanf("%f", &start);

    printf("Enter ending temperature in Fahrenheit: ");
    scanf("%f", &end);

    printf("Enter temperature increment: ");
    scanf("%f", &increment);

    // Perform temperature conversion
    float fahrenheit = start;
    while (fahrenheit <= end) {
        float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%6.2f degrees F = %6.2f degrees C\n", fahrenheit, celsius);
        fahrenheit += increment;
    }

    return 0;
}
