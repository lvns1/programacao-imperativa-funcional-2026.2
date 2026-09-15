#include <stdio.h>

int main() {
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    float kelvin = celsius + 273.15f;
    
    printf("Fahrenheit: %.2f *F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);
    return 0;
}