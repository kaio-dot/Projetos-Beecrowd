#include <stdio.h>
 
int main() {
   double n, area, raio;
    n=3.14159;
    scanf("%lf", &raio);
    scanf("%lf", &n);
    
    area = n*(raio*raio);
    
    printf("A=%.4lf\n", area);
    
    
    return 0;
}
