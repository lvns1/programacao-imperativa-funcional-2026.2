#include <stdio.h>

int main() {
    float lado, base, altura;
    
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    printf("Digite a base e a altura (separadas por espaco): ");
    scanf("%f %f", &base, &altura);
    
    float area_quadrado = lado * lado;
    float area_retangulo = base * altura;
    float area_triangulo = (base * altura) / 2.0f;
    
    printf("a) Area do Quadrado: %.2f\n", area_quadrado);
    printf("b) Area do Retangulo: %.2f\n", area_retangulo);
    printf("c) Area do Triangulo Retangulo: %.2f\n", area_triangulo);
    return 0;
}