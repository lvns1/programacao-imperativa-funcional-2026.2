#include <stdio.h>

#define PI 3.141593

int main() {
    float graus;
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);
    
    float radianos = graus * (PI / 180.0f);
    
    printf("Equivalente em radianos: %.4f rad\n", radianos);
    return 0;
}