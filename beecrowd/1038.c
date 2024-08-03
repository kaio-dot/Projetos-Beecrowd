#include <stdio.h>
 
int main() {
    int codigo, qntd;
    double total;
    double precos[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    
    scanf("%d %d", &codigo, &qntd);
    
    total = qntd*precos[codigo-1];
    
    printf("Total: R$ %.2lf\n", total);
    
    return 0;
}
