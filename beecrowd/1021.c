#include <stdio.h>

int main() {
    double valor;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int qtdNotas[6] = {0};
    int qtdMoedas[6] = {0};

    scanf("%lf", &valor);

    // Convertendo o valor para centavos (inteiro)
    int valorEmCentavos = valor * 100;

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        qtdNotas[i] = valorEmCentavos / (notas[i] * 100);
        valorEmCentavos %= notas[i] * 100;
        printf("%d nota(s) de R$ %d.00\n", qtdNotas[i], notas[i]);
    }

    printf("MOEDAS:\n");
    int moedas[6] = {100, 50, 25, 10, 5, 1};
    for (int i = 0; i < 6; i++) {
        qtdMoedas[i] = valorEmCentavos / moedas[i];
        valorEmCentavos %= moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtdMoedas[i], moedas[i] / 100.0);
    }

    return 0;
}
