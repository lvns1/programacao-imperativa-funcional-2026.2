#include <stdio.h>

int main(void) {
    printf("===========================================\n");
    printf("   TABELA DE CONVERSAO DE TEMPERATURAS\n");
    printf("===========================================\n");
    printf("%-12s | %-12s | %-12s\n", "Celsius (C)", "Fahrenheit (F)", "Kelvin (K)");
    printf("-------------------------------------------\n");

    for (int c = 0; c <= 100; c += 5) {
        float f = (9.0f * c) / 5.0f + 32.0f;
        float k = c + 273.15f;

        printf("%-12.2f | %-12.2f | %-12.2f\n", (float)c, f, k);
    }

    printf("===========================================\n");
    return 0;
}