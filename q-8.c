#include <stdio.h>
float CelsiusToFahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}
int main() {
    float celsius, fahrenheit;


    printf("Celsius= ");
    scanf("%f", &celsius);
  
    fahrenheit =CelsiusToFahrenheit(celsius);

    printf("Fahrenheit=  %f\n", fahrenheit);

    return 0;
}
