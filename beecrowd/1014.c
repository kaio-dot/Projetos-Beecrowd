#include <stdio.h>
 
int main() {
    int distancia;
    double gasosaTotal, consumoMedio;
    
    scanf("%d", &distancia);
    scanf("%lf", &gasosaTotal);
    
    consumoMedio = distancia / gasosaTotal;
    
    printf("%.3lf km/l\n", consumoMedio);

 
    return 0;
}
