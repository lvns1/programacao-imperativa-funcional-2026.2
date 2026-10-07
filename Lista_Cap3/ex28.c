#include <stdio.h>

int main(void) {
    int opcao;
    float salario;

    do {
        printf("\n===========================================\n");
        printf("    SISTEMA DE FOLHA DE PAGAMENTO\n");
        printf("===========================================\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("-------------------------------------------\n");
        printf("Escolha uma opcao (1-3): ");

        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            printf("Opcao invalida! Digite um numero de 1 a 3.\n");
            continue;
        }

        switch (opcao) {
            case 1:
                printf("\n--- REAJUSTE SALARIAL ---\n");
                printf("Informe o salario atual (R$): ");
                scanf("%f", &salario);
                if (salario <= 0.0f) {
                    printf("Erro: Salario deve ser maior que zero!\n");
                    break;
                }

                if (salario <= 2000.0f) {
                    float reajuste = salario * 0.15f;
                    printf("Percentual aplicado: 15%%\n");
                    printf("Valor do aumento: R$ %.2f\n", reajuste);
                    printf("Novo salario reajustado: R$ %.2f\n", salario + reajuste);
                } else {
                    float reajuste = salario * 0.10f;
                    printf("Percentual aplicado: 10%%\n");
                    printf("Valor do aumento: R$ %.2f\n", reajuste);
                    printf("Novo salario reajustado: R$ %.2f\n", salario + reajuste);
                }
                break;

            case 2:
                printf("\n--- RETENCAO DE IMPOSTO DE RENDA ---\n");
                printf("Informe o salario bruto (R$): ");
                scanf("%f", &salario);
                if (salario <= 0.0f) {
                    printf("Erro: Salario deve ser maior que zero!\n");
                    break;
                }

                if (salario <= 3000.0f) {
                    float desconto = salario * 0.08f;
                    printf("Aliquota IR: 8%%\n");
                    printf("Valor do desconto de IR: R$ %.2f\n", desconto);
                    printf("Salario apos retencao: R$ %.2f\n", salario - desconto);
                } else {
                    float desconto = salario * 0.15f;
                    printf("Aliquota IR: 15%%\n");
                    printf("Valor do desconto de IR: R$ %.2f\n", desconto);
                    printf("Salario apos retencao: R$ %.2f\n", salario - desconto);
                }
                break;

            case 3:
                printf("\nEncerrando o Sistema de Folha de Pagamento. Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida! Por favor, escolha 1, 2 ou 3.\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}