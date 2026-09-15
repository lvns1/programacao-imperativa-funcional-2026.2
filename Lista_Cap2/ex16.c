#include <stdio.h>
#include <math.h>

int main() {
    float alt_degrau_cm, alt_total_m;
    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &alt_degrau_cm);
    printf("Digite a altura total a alcancar (em metros): ");
    scanf("%f", &alt_total_m);
    
    float alt_total_cm = alt_total_m * 100.0f;
    int degraus = (int)ceil(alt_total_cm / alt_degrau_cm);
    
    printf("Numero minimo de degraus: %d\n", degraus);
    return 0;
}