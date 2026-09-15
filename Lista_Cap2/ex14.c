#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    
    printf("Area do triangulo (Heron): %.2lf\n", area);
    return 0;
}