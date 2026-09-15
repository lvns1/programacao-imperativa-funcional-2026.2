#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    printf("Digite as quatro notas do aluno: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    float media_simples = (n1 + n2 + n3 + n4) / 4.0f;
    float media_ponderada = (n1 * 1.0f + n2 * 1.0f + n3 * 2.0f + n4 * 2.0f) / (1.0f + 1.0f + 2.0f + 2.0f);
    
    printf("a) Media Aritmetica Simples: %.2f\n", media_simples);
    printf("b) Media Ponderada: %.2f\n", media_ponderada);
    return 0;
}