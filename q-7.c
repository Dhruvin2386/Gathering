#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = fahrenheitToCelsius(fahrenheit);

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}