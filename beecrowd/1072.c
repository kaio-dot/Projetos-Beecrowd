#include <stdio.h>

int main() {
    int N, X, in = 0, out = 0;

    // Lê a quantidade de valores
    scanf("%d", &N);

    // Verifica se o valor de N está dentro do limite especificado
    if (N < 10000) {
        for (int i = 0; i < N; i++) {
            // Lê cada valor X
            scanf("%d", &X);

            // Verifica se X está no intervalo [10, 20]
            if (X >= 10 && X <= 20) {
                in++;
            } else {
                out++;
            }
        }
    }

    // Imprime o resultado
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
