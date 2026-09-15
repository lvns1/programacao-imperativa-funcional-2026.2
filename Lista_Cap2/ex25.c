#include <stdio.h>

int main() {
    float salario_base;
    printf("Digite o salario-base: ");
    scanf("%f", &salario_base);
    
    float salario_liquido = salario_base + (salario_base * 0.05f) - (salario_base * 0.07f);
    
    printf("Salario liquido a receber: R$ %.2f\n", salario_liquido);
    return 0;
}