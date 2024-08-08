#include <stdio.h>

int main() {
    int N, X, Y, i, soma;

    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &X, &Y);

        soma = 0;

        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        for (i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                soma += i;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}
