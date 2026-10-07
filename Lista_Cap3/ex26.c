#include <stdio.h>

int eh_primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int a, b;

    do {
        printf("Digite o inicio do intervalo (A): ");
        scanf("%d", &a);
        printf("Digite o fim do intervalo (B > A): ");
        scanf("%d", &b);

        if (a >= b || a <= 0) {
            printf("Erro: Garanta que A > 0 e A < B!\n\n");
        }
    } while (a >= b || a <= 0);

    printf("\nNumeros primos no intervalo [%d, %d]:\n", a, b);

    long long int soma_primos = 0;
    int contagem = 0;

    for (int i = a; i <= b; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
            soma_primos += i;
            contagem++;
        }
    }

    if (contagem == 0) {
        printf("Nenhum numero primo foi encontrado neste intervalo.");
    }

    printf("\n\nTotal de primos encontrados: %d\n", contagem);
    printf("Soma de todos os primos do intervalo: %lld\n", soma_primos);

    return 0;
}