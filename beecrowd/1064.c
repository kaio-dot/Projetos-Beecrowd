#include <stdio.h>

int main() {
    double valor;
    int positivos = 0;
    double somaPositivos = 0.0;

    // Lê os valores e conta os positivos
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &valor);
        if (valor > 0) {
            positivos++;
            somaPositivos += valor;
        }
    }
    
     if (positivos > 0) {
        // Calcula a média dos valores positivos
        double mediaPositivos = somaPositivos / positivos;
    
    

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", mediaPositivos);
    

    return 0;
}
}
