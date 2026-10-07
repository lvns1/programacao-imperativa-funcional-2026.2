#include <stdio.h>

int main() {
int n;
long long int fatorial = 1;

printf("Digite um numero inteiro nao-negativo N para calcular N!: ");
if (scanf("%d", &n) != 1) {
    printf("Erro: Entrada invalida!\n");
    return 1;
}

if (n < 0) {
    printf("Erro: Nao existe fatorial de numero negativo.\n");
    return 1;
}

// Calculo iterativo do fatorial
for (int i = 1; i <= n; i++) {
    fatorial *= i;
}

// Impressao com o especificador %lld para evitar estouro de memoria
printf("\n%d! = %lld\n", n, fatorial);

return 0;

}