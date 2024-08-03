#include <stdio.h>
 
int main() {
int C1, N1, C2, N2;
	double V1, V2, total;

	scanf("%d", &C1);
	scanf("%d", &N1);
	scanf("%lf", &V1);
	scanf("%d", &C2);
	scanf("%d", &N2);
	scanf("%lf", &V2);

	total = (N1*V1 + N2*V2);

printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
