#include <stdio.h>

int main() {
    float valor;
    int positivos = 0;

    // Lê os valores e conta os positivos
    for (int i = 0; i < 6; i++) {
        scanf("%f", &valor);
        if (valor > 0) {
            positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}
