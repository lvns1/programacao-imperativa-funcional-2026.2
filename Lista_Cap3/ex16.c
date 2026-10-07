#include <stdio.h>

int main(void) {
    const int SENHA_CORRETA = 2026;
    const int MAX_TENTATIVAS = 3;
    int senha_digitada;
    int tentativas = 0;
    int autenticado = 0;

    printf("=== SISTEMA DE AUTENTICACAO ===\n");

    while (tentativas < MAX_TENTATIVAS) {
        printf("Digite a senha de 4 digitos: ");
        if (scanf("%d", &senha_digitada) != 1) {
            while (getchar() != '\n');
            continue;
        }

        tentativas++;

        if (senha_digitada == SENHA_CORRETA) {
            autenticado = 1;
            break;
        } else {
            int restantes = MAX_TENTATIVAS - tentativas;
            if (restantes > 0) {
                printf("Senha incorreta! Tentativas restantes: %d\n\n", restantes);
            }
        }
    }

    if (autenticado) {
        printf("\nAcesso Concedido! (Tentativa(s) utilizada(s): %d)\n", tentativas);
    } else {
        printf("\nConta Bloqueada por Seguranca! Voce excedeu o limite de %d tentativas.\n", MAX_TENTATIVAS);
    }

    return 0;
}