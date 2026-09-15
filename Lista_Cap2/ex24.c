#include <stdio.h>

int main() {
    float kmh;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);
    
    float ms = kmh / 3.6f;
    
    printf("Velocidade convertida: %.2f m/s\n", ms);
    return 0;
}