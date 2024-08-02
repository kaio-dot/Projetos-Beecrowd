#include <stdio.h>

int main() {
    int diaInicio, diaFim, hInicio, mInicio, sInicio, hFim, mFim, sFim;
    int dias, horas, minutos, segundos;
    char desc[4], sep;

    // Leitura da data e hora de início
    scanf("%s %d", desc, &diaInicio);
    scanf("%d %c %d %c %d", &hInicio, &sep, &mInicio, &sep, &sInicio);

    // Leitura da data e hora de término
    scanf("%s %d", desc, &diaFim);
    scanf("%d %c %d %c %d", &hFim, &sep, &mFim, &sep, &sFim);

    // Cálculo da diferença em segundos
    segundos = sFim - sInicio;
    if (segundos < 0) {
        segundos += 60;
        mFim--;
    }

    // Cálculo da diferença em minutos
    minutos = mFim - mInicio;
    if (minutos < 0) {
        minutos += 60;
        hFim--;
    }

    // Cálculo da diferença em horas
    horas = hFim - hInicio;
    if (horas < 0) {
        horas += 24;
        diaFim--;
    }

    // Cálculo da diferença em dias
    dias = diaFim - diaInicio;

    // Impressão do resultado
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, minutos, segundos);

    return 0;
}
