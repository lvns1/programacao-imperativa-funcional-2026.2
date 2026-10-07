#include <stdio.h>

int main(void) {
    int n;

    printf("Digite o numero do termo desejado (N > 0): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: N deve ser um inteiro estritamente positivo!\n");
        return 1;
    }

    printf("\nSequencia de Fibonacci ate o termo %d:\n", n);

    long long int t1 = 1, t2 = 1, proximo;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", t1);
        } else if (i == 2) {
            printf(", %lld", t2);
        } else {
            proximo = t1 + t2;
            printf(", %lld", proximo);
            t1 = t2;
            t2 = proximo;
        }
    }

    long long int enesimo = (n == 1) ? 1 : t2;
    printf("\n\nO %d-esimo termo da Sequencia de Fibonacci eh: %lld\n", n, enesimo);

    return 0;
}