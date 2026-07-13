#include <stdio.h>

void main() {
    float c, f;
    printf("Convert Fahrenheit to Celsius\n");
    printf("Enter Fahrenheit value: ");
    scanf("%f", &f);

    printf("\nFahrenheit: %f\n", f);
    printf("\nFormula used: C = (F - 32) * 5 / 9\n");

    c = (f - 32) * 5 / 9;
    printf("\nCelsius: %f\n", c);
}
