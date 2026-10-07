#include <stdio.h>

int main() {
int total_segundos;
int horas, minutos, segundos, resto;

printf("Digite a quantidade total de segundos: ");
if (scanf("%d", &total_segundos) != 1 || total_segundos < 0) {
    printf("Erro: Digite uma quantidade inteira de segundos nao-negativa.\n");
    return 1;
}

// Conversao utilizando divisao inteira e operador modulo (%)
horas = total_segundos / 3600;
resto = total_segundos % 3600;

minutos = resto / 60;
segundos = resto % 60;

printf("\n%d segundos correspondem a: %d hora(s), %d minuto(s) e %d segundo(s).\n",
       total_segundos, horas, minutos, segundos);

return 0;


}