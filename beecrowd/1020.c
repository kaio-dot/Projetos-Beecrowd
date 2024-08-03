#include <stdio.h>
 
int main() {
 int  idadeEmDias, anos, meses, dias;
 
 scanf("%d", &idadeEmDias);
 
 anos = idadeEmDias / 365;
 idadeEmDias %= 365;
 
 meses = idadeEmDias / 30;
 idadeEmDias %= 30;
 dias = idadeEmDias;
 
printf("%d ano(s)\n", anos);
printf("%d mes(es)\n", meses);
printf("%d dia(s)\n", dias);
 
 
 
    return 0;
}
