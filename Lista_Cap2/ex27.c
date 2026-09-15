#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Semente baseada no tempo atual para gerar numeros diferentes a cada execucao
    srand((unsigned int)time(NULL));
    
    // rand() % 6 gera um valor de 0 a 5; somando +1 obtemos o intervalo estrito de 1 a 6
    int dado1 = (rand() % 6) + 1;
    int dado2 = (rand() % 6) + 1;
    int dado3 = (rand() % 6) + 1;
    
    printf("Lancamento dos 3 dados: %d, %d, %d\n", dado1, dado2, dado3);
    return 0;
}