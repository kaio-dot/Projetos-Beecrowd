#include <stdio.h>

int main() {
    int valorEmReais, cedulas;

    scanf("%d", &valorEmReais);

    printf("%d\n", valorEmReais);

   cedulas = valorEmReais / 100;
    printf("%d nota(s) de R$ 100,00\n", cedulas);
    valorEmReais %= 100;

    cedulas = valorEmReais / 50;
    printf("%d nota(s) de R$ 50,00\n", cedulas);
    valorEmReais %= 50;

    cedulas = valorEmReais / 20;
    printf("%d nota(s) de R$ 20,00\n", cedulas);
    valorEmReais %= 20;

    cedulas = valorEmReais / 10;
    printf("%d nota(s) de R$ 10,00\n", cedulas);
    cedulas %= 10;

    cedulas = valorEmReais / 5;
    printf("%d nota(s) de R$ 5,00\n", cedulas);
    valorEmReais %= 5;

    cedulas = valorEmReais / 2;
    printf("%d nota(s) de R$ 2,00\n", cedulas);
    valorEmReais %= 2;

    printf("%d nota(s) de R$ 1,00\n", valorEmReais);

    return 0;
}
