#include <stdio.h>
#include <math.h>
#define PI 3.14159
 
int main() {
	double A, B, C;
	double Tri, Cir, Tra, Qua, Ret;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);

	Tri = A*C/2;
	Cir = (C*C)*PI;
	Tra = (A+B)*C/2;
	Qua = B*B;
	Ret = A*B;
	
 printf("TRIANGULO: %.3lf\n", Tri);
 printf("CIRCULO: %.3lf\n", Cir);
 printf("TRAPEZIO: %.3lf\n", Tra);
 printf("QUADRADO: %.3lf\n", Qua);
 printf("RETANGULO: %.3lf\n", Ret);
  
    return 0;
}
