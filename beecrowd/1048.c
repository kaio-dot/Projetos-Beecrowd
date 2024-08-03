#include <stdio.h>

int main() {
    double salario, novoSalario, reajuste, percentual;

    // Leitura do salário do funcionário
    scanf("%lf", &salario);

    // Verificação do intervalo e cálculo do reajuste e novo salário
    if (salario <= 400.00) {
        percentual = 15;
    } else if (salario <= 800.00) {
        percentual = 12;
    } else if (salario <= 1200.00) {
        percentual = 10;
    } else if (salario <= 2000.00) {
        percentual = 7;
    } else {
        percentual = 4;
    }

    reajuste = salario * percentual / 100;
    novoSalario = salario + reajuste;

    // Saída dos resultados formatados
    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", percentual);

    return 0;
}
