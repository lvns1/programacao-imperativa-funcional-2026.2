#include <stdio.h>

int main() {
const int SENHA_CORRETA = 2026;
const int LIMITE_TENTATIVAS = 3;
int senha_digitada;
int tentativas = 0;
int acesso_concedido = 0;

while (tentativas < LIMITE_TENTATIVAS) {
    printf("Digite a senha secreta (Tentativa %d de %d): ", tentativas + 1, LIMITE_TENTATIVAS);
    if (scanf("%d", &senha_digitada) != 1) {
        printf("Erro: Entrada invalida! Digite apenas numeros.\n\n");
        while (getchar() != '\n');
        tentativas++;
        continue;
    }

    if (senha_digitada == SENHA_CORRETA) {
        acesso_concedido = 1;
        break; // Encerra o laco imediatamente ao acertar
    } else {
        printf("Senha incorreta!\n\n");
        tentativas++;
    }
}

if (acesso_concedido) {
    printf("Acesso Concedido!\n");
} else {
    printf("Conta Bloqueada por Seguranca!\n");
}

return 0;

}