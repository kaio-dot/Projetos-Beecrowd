#include <stdio.h>
 
int main() {
 int hora, numero;
 double ph, salario;
    scanf("%d", &numero);
    scanf("%d", &hora);
    scanf("%lf", &ph);
    
    salario = ph * hora;
    
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}
