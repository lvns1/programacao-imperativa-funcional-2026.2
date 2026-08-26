#include <stdio.h>

int main() {
    int n1, n2, n3;
    double media;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (double)(n1 + n2 + n3) / 3.0;

    printf("A media aritmetica eh: %.2lf\n", media);

    return 0;
}