#include <stdio.h>

int main(void) {
    int valor_saque;

    printf("=== SIMULADOR DE CAIXA ELETRONICO ===\n");
    printf("Cedulas disponiveis: R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2\n\n");

    do {
        printf("Digite o valor do saque em reais (R$): ");
        if (scanf("%d", &valor_saque) != 1 || valor_saque <= 0) {
            while (getchar() != '\n');
            printf("Erro: Informe um valor inteiro positivo valido!\n\n");
            valor_saque = 0;
        } else if (valor_saque == 1 || valor_saque == 3) {
            printf("Erro: Nao eh possivel sacar R$ %d com as cedulas disponiveis (menor nota de 2)!\n\n", valor_saque);
            valor_saque = 0;
        }
    } while (valor_saque <= 0);

    int restante = valor_saque;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    while (restante >= 100) { restante -= 100; c100++; }
    while (restante >= 50) {
        if (restante % 2 != 0 && restante < 55) break;
        restante -= 50; c50++;
    }
    while (restante >= 20) {
        if (restante % 2 != 0 && restante < 25) break;
        restante -= 20; c20++;
    }
    while (restante >= 10) {
        if (restante % 2 != 0 && restante < 15) break;
        restante -= 10; c10++;
    }
    while (restante >= 5) {
        if (restante % 2 != 0 || restante == 5) {
            restante -= 5; c5++;
        } else break;
    }
    while (restante >= 2) { restante -= 2; c2++; }

    printf("\n=== DECOMPOSICAO DE CEDULAS PARA SAQUE DE R$ %d ===\n", valor_saque);
    if (c100 > 0) printf("- %d cedula(s) de R$ 100,00\n", c100);
    if (c50 > 0)  printf("- %d cedula(s) de R$ 50,00\n", c50);
    if (c20 > 0)  printf("- %d cedula(s) de R$ 20,00\n", c20);
    if (c10 > 0)  printf("- %d cedula(s) de R$ 10,00\n", c10);
    if (c5 > 0)   printf("- %d cedula(s) de R$ 5,00\n", c5);
    if (c2 > 0)   printf("- %d cedula(s) de R$ 2,00\n", c2);

    return 0;
}