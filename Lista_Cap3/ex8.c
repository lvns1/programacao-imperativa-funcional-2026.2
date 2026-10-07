int main() {
double nota;

do {
    printf("Digite uma nota valida entre 0.0 e 10.0: ");
    if (scanf("%lf", &nota) != 1) {
        printf("Erro: Entrada invalida! Digite apenas numeros.\n\n");
        while (getchar() != '\n'); 
        nota = -1.0; 
        continue;
    }

    if (nota < 0.0 || nota > 10.0) {
        printf("Erro: Nota %.2f invalida! Tente novamente.\n\n", nota);
    }
} while (nota < 0.0 || nota > 10.0);

printf("\nNota registrada com sucesso!\n");

return 0;

}