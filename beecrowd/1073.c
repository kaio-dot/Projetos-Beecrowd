#include <stdio.h>

int main() {
    int N;

    // Lê o valor de N
    scanf("%d", &N);

    // Verifica se o valor de N está dentro do limite especificado
    if (N > 5 && N < 2000) {
        // Percorre de 1 até N
        for (int i = 2; i <= N; i += 2) {
            // Verifica se o valor é par
            if (i % 2 == 0) {
                // Calcula o quadrado do número par e imprime o resultado
                printf("%d^2 = %d\n", i, i * i);
            }
        }
    }

    return 0;
}
