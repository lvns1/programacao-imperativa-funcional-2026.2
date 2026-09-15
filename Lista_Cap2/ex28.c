#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    
    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);
    
    float bruto = (horas_normais * 10.0f) + (horas_extras * 15.0f);
    
    // Cálculo do excedente usando operador ternário para evitar blocos if/else
    float excedente = (bruto > 12000.0f) ? (bruto - 12000.0f) : 0.0f;
    float imposto = excedente * 0.10f;
    
    printf("a) Salario Anual Bruto: R$ %.2f\n", bruto);
    printf("b) Imposto Progressivo Retido: R$ %.2f\n", imposto);
    return 0;
}