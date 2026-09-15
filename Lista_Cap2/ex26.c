#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;
    
    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);
    printf("Digite o preco do metro do arame (R$): ");
    scanf("%f", &preco_metro);
    
    float perimetro = 2.0f * (comprimento + largura);
    float metros_arame = perimetro * 3.0f; // 3 fios de arame
    float custo_total = metros_arame * preco_metro;
    
    printf("Metros de arame a comprar: %.2f m\n", metros_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);
    return 0;
}