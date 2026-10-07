#include <stdio.h>
#include <math.h>

int main() {
double a, b, c, p, area;

printf("Digite os tres lados do triangulo (a b c): ");
if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0) {
    printf("Erro: Os lados devem ser numeros estritamente positivos.\n");
    return 1;
}


if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
    printf("Erro: Os lados informados nao satisfazem a desigualdade triangular.\n");
    return 1;
}


p = (a + b + c) / 2.0;


area = sqrt(p * (p - a) * (p - b) * (p - c));

printf("\n--- GEOMETRIA DO TRIANGULO ---\n");
printf("Lados: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
printf("Semiperimetro (p): %.3f\n", p);
printf("Area do triangulo (Heron): %.3f\n", area);

return 0;


}