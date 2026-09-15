#include <stdio.h>

int main() {
    int dias;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);
    
    float bruto = dias * 30.0f;
    float liquido = bruto * (1.0f - 0.08f); // Desconto de 8% de IR
    
    printf("Valor Bruto: R$ %.2f\n", bruto);
    printf("Valor Liquido: R$ %.2f\n", liquido);
    return 0;
}