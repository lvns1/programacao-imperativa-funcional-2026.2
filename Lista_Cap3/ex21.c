#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    char letra_secreta = (char)(rand() % 26 + 'a');
    char tentativa_chute;
    int total_tentativas = 0;

    printf("=== JOGO DE ADIVINHACAO DE LETRAS ===\n");
    printf("Tente adivinhar a letra secreta (entre 'a' e 'z')!\n\n");

    do {
        printf("Digite seu chute: ");
        scanf(" %c", &tentativa_chute);

        if (tentativa_chute >= 'A' && tentativa_chute <= 'Z') {
            tentativa_chute += 32;
        }

        if (tentativa_chute < 'a' || tentativa_chute > 'z') {
            printf("Por favor, digite apenas letras de 'a' a 'z'.\n\n");
            continue;
        }

        total_tentativas++;

        if (tentativa_chute < letra_secreta) {
            printf("DICA: A letra secreta vem DEPOIS de '%c' no alfabeto.\n\n", tentativa_chute);
        } else if (tentativa_chute > letra_secreta) {
            printf("DICA: A letra secreta vem ANTES de '%c' no alfabeto.\n\n", tentativa_chute);
        } else {
            printf("\nPARABENS! Voce acertou a letra secreta '%c'!\n", letra_secreta);
            printf("Total de tentativas utilizadas: %d\n", total_tentativas);
        }
    } while (tentativa_chute != letra_secreta);

    return 0;
}