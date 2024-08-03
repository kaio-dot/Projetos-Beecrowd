#include <stdio.h>

int main() {
    int valor;
    int pares = 0;

    // Leitura dos 5 valores e contagem dos pares
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            pares++;
        }
    }

    // Saída
    printf("%d valores pares\n", pares);

    return 0;
}
