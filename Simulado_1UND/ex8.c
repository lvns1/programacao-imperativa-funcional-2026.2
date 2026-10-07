#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
double raio, area, volume;

printf("Digite o valor do raio R da esfera: ");
if (scanf("%lf", &raio) != 1 || raio < 0) {
    printf("Erro: Valor de raio invalido!\n");
    return 1;
}

// Calculos utilizando a funcao pow() de <math.h>
area = 4.0 * PI * pow(raio, 2);
volume = (4.0 / 3.0) * PI * pow(raio, 3);

printf("\n--- RESULTADOS DA ESFERA ---\n");
printf("Raio (R): %.3f\n", raio);
printf("Area da superficie (A): %.3f\n", area);
printf("Volume da esfera (V): %.3f\n", volume);

return 0;

}