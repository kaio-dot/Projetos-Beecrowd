#include <stdio.h>

int main() {
    float N1, N2, N3, N4, media, exame;

    // Leitura das notas
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    // Calcula a média ponderada
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10;

    // Imprime a média
    printf("Media: %.1f\n", media);

    // Verifica a situação do aluno
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%f", &exame);

        printf("Nota do exame: %.1f\n", exame);

        // Calcula a média final
        float media_final = (media + exame) / 2;

        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        // Imprime a média final
        printf("Media final: %.1f\n", media_final);
    }

    return 0;
}
