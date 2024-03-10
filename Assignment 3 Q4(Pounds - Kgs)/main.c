#include <stdio.h>

int main(void) {
    float start, end, increment;

    printf("Enter starting weight in pounds: ");
    scanf("%f", &start);

    printf("Enter ending weight in pounds: ");
    scanf("%f", &end);

    printf("Enter weight increment: ");
    scanf("%f", &increment);

    printf("\n%15s %20s\n", "Pounds", "Kilograms");
    printf("---------------------------------\n");

    float pounds = start;
    while (pounds <= end) {
        float kilograms = pounds * 0.453592;
        printf("%15.2f %20.2f\n", pounds, kilograms);
        pounds += increment;
    }

    return 0;
}
