#include <stdio.h>

int main() {
    double M[12][12], soma = 0.0;
    char operacao;
    int i, j, contador = 0;

    scanf(" %c", &operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {  
        for (j = i + 1; j < 11 - i; j++) { 
            soma += M[i][j];
            contador++;
        }
    }

    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } else if (operacao == 'M') {
        printf("%.1lf\n", soma / contador);
    }

    return 0;
}
