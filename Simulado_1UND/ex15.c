#include <stdio.h>

int main() {
int n;
int numero = 1;

printf("Digite o numero de linhas N para o Triangulo de Floyd: ");
if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Erro: Digite um numero inteiro estritamente positivo!\n");
    return 1;
}

printf("\n--- TRIANGULO DE FLOYD (N = %d) ---\n\n", n);

// Lacos aninhados: externo controla linhas, interno controla colunas
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        printf("%d ", numero);
        numero++;
    }
    printf("\n");
}

return 0;

}