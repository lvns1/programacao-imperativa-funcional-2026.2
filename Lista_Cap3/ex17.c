#include <stdio.h>

int main(void) {
    float nota;
    float soma = 0.0f;
    float maior = -1.0f;
    float menor = 11.0f;
    int total_alunos = 0;

    printf("=== ESTATISTICAS DA TURMA ===\n");
    printf("Digite as notas dos alunos (0.0 a 10.0). Digite -1.0 para encerrar.\n\n");

    while (1) {
        printf("Nota do aluno %d: ", total_alunos + 1);
        if (scanf("%f", &nota) != 1) {
            printf("Entrada invalida! Digite um numero real.\n");
            while (getchar() != '\n');
            continue;
        }

        if (nota == -1.0f) {
            break;
        }

        if (nota < 0.0f || nota > 10.0f) {
            printf("Erro: Nota invalida! A nota deve estar no intervalo entre 0.0 e 10.0.\n");
            continue;
        }

        soma += nota;
        total_alunos++;

        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
    }

    printf("\n=== RELATORIO FINAL DE DESEMPENHO ===\n");
    if (total_alunos > 0) {
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota da turma:      %.2f\n", maior);
        printf("c) Menor nota da turma:      %.2f\n", menor);
        printf("d) Media geral da turma:     %.2f\n", soma / total_alunos);
    } else {
        printf("Nenhuma nota valida foi informada.\n");
    }

    return 0;
}