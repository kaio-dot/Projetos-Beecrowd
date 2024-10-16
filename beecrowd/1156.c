#include <stdio.h>
#include <math.h>
 
int main() {
 double S=0.0;
 
 for(int i=1;i<=20;i++){
     double numerador=2*i-1;
     double denominador=pow(2,i-1);
     S+=numerador/denominador;
 }
 printf("%.2lf\n", S);
    
 
    return 0;
}
