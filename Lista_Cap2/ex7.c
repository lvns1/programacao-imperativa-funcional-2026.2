#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    printf("Data no formato invertido: %04d/%02d/%02d\n", ano, mes, dia);
    return 0;
}