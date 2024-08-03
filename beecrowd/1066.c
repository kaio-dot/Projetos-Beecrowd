#include <stdio.h>

int main() {
    int numeros[5];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    // Lendo os valores
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);

        // Contando pares e ímpares
        if (numeros[i] % 2 == 0)
            pares++;
        else
            impares++;

        // Contando positivos e negativos
        if (numeros[i] > 0)
            positivos++;
        else if (numeros[i] < 0)
            negativos++;
    }

    // Imprimindo os resultados
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}
