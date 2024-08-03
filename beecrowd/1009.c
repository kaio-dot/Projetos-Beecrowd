#include <stdio.h>
 
int main() {
    char nome;
    double sf, ved, total;
    
    scanf("%s", &nome);
    scanf("%lf", &sf);
    scanf("%lf", &ved);
    
    total = (sf + 0.15*ved);
    
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
