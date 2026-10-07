#include <stdio.h>

void versao_for(void) {
    printf("--- Versao FOR ---\n");
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

void versao_while(void) {
    printf("--- Versao WHILE ---\n");
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

void versao_dowhile(void) {
    printf("--- Versao DO-WHILE ---\n");
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main(void) {
    versao_for();
    versao_while();
    versao_dowhile();

    /*
     * Justificativa:
     * A estrutura FOR é a mais adequada para este caso porque o número de iterações
     * é fixo e previamente conhecido (de 0 a 100). O laço FOR agrupa em um único
     * cabeçalho a inicialização (int i = 0), a condição de parada (i <= 100) e o
     * incremento (i++), tornando o código mais limpo, compacto e legível.
     */
    return 0;
}