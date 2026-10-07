#include <stdio.h>

int main() {
int dias;
double salario_bruto, gratificacao, imposto, salario_liquido;
const double VALOR_DIARIA = 45.00;

printf("Digite o numero de dias trabalhados pelo tecnico: ");
if (scanf("%d", &dias) != 1 || dias < 0) {
    printf("Erro: O numero de dias deve ser um numero inteiro nao-negativo.\n");
    return 1;
}

salario_bruto = dias * VALOR_DIARIA;
gratificacao = salario_bruto * 0.05; // 5% de gratificacao
imposto = salario_bruto * 0.08;      // 8% de imposto de renda
salario_liquido = salario_bruto + gratificacao - imposto;

printf("\n========================================\n");
printf("           HOLERITE DETALHADO           \n");
printf("========================================\n");
printf("Dias trabalhados  : %d\n", dias);
printf("Valor da diaria   : R$ %.2f\n", VALOR_DIARIA);
printf("----------------------------------------\n");
printf("Salario Bruto     : R$ %.2f\n", salario_bruto);
printf("(+) Gratificacao (5%%): R$ %.2f\n", gratificacao);
printf("(-) Imposto IR (8%%)  : R$ %.2f\n", imposto);
printf("----------------------------------------\n");
printf("Salario Liquido   : R$ %.2f\n", salario_liquido);
printf("========================================\n");

return 0;

}