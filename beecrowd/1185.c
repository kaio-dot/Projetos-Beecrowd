#include <stdio.h>

int main() {
    char operacao;
    double matriz[12][12], soma = 0.0;
    int contador = 0;

    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12 - i - 1; j++) { 
            soma += matriz[i][j];
            contador++;
        }
    }


    if (operacao == 'M') {
        soma /= contador;
    }

    printf("%.1lf\n", soma);

    return 0;
}
