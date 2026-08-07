#include <stdio.h>

void main() {
    float c, f;
    
    printf("Convert Celsius to Fahrenheit\n");
    printf("Enter Celsius value: ");
    scanf("%f", &c);  // Corrected format specifier
    
    printf("Celsius: %f\n", c);
    printf("Formula used: F = C * (9/5) + 32\n");
    
    f = c * 9 / 5 + 32;  // Corrected formula
    printf("Fahrenheit: %f\n", f);  // Printing the correct variable
    

}
