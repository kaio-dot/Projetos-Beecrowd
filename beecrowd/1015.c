#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     double distancia;
     double x1, y1, x2, y2;

     scanf("%lf %lf", &x1, &y1);
     scanf("%lf %lf", &x2, &y2);

     distancia = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));

     printf("%.4lf\n", distancia);
     return 0;
}
