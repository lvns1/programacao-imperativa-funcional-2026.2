#include <stdio.h>

#define PI 3.141593

int main() {
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    float area = 4.0f * PI * raio * raio;
    // Uso explicito de 4.0 / 3.0 para evitar truncamento de divisao inteira (4/3 viraria 1)
    float volume = (4.0f / 3.0f) * PI * raio * raio * raio;
    
    printf("Area de superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);
    return 0;
}