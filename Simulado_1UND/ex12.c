#include <stdio.h>

int main() {
double nota;

// Estrutura do-while garante que a solicitacao ocorra pelo menos 1 vez
do {
    printf("Digite uma nota valida (entre 0.0 e 10.0): ");
    if (scanf("%lf", &nota) != 1) {
        printf("Erro: Digite apenas valores numericos!\n\n");
        // Limpa o buffer de entrada
        while (getchar() != '\n');
        nota = -1.0; // Atribui valor invalido para manter o laco
        continue;
    }

    if (nota < 0.0 || nota > 10.0) {
        printf("Erro: Nota %.2f invalida. O valor deve estar no intervalo fechado [0.0, 10.0].\n\n", nota);
    }
} while (nota < 0.0 || nota > 10.0);

printf("\nNota %.2f registrada com sucesso!\n", nota);

return 0;

}